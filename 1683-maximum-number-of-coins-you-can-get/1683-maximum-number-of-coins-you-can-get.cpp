class Solution {
public:
    int maxCoins(vector<int>& p) {
        sort(p.begin(),p.end());
        int nas=0;
        for(int i=p.size()/3;i<p.size();i+=2){
            nas+=p[i];
        }
        return nas;
    }
};