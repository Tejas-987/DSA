class Solution {
public:
    int kItemsWithMaximumSum(int o, int z, int n, int k) {
      vector<int> a;
      while(o>0){
        a.push_back(1);
        o--;
      }
      while(z>0){
        a.push_back(0);
        z--;
      }
      while(n>0){
        a.push_back(-1);
        n--;
      }int s=0;
      for(int i=0;i<k;i++){
        s+=a[i];
      }
      return s;
    }
};