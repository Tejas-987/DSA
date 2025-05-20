class Solution {
public:
    int minPartitions(string n) {
        int maxi=0;
        for(auto i:n){
            int n=i-'0';
            maxi=max(maxi,n);
        }
        return maxi;
    }
};