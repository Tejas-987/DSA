class Solution {
public:
    int minimumSum(int num) {
        vector<int> vec;
        int n=0;
        while(num>0){
            n=num%10;
            vec.push_back(n);
            num=num/10;
        }
        sort(vec.begin(),vec.end());
        int ans= (vec[0]*10+vec[3])+(vec[1]*10+vec[2]);
  return ans;
    }
};