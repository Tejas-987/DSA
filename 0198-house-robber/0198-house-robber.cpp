class Solution {
public:
    int rob(vector<int>& nu) {
        int n=nu.size();
        if(n==1){
            return nu[0];
        }
        vector<int> dp(n,0);

        dp[0]=nu[0];
        dp[1]=max(nu[0],nu[1]);

        for(int i=2;i<n;i++){
            dp[i]=max(dp[i-1],nu[i]+dp[i-2]);

        }
        return dp[n-1];
    }
};