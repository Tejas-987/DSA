class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int fq = 0, ans = 0;
        map<int, int> mp;
        for(int i = 0; i < nums.size(); ++i){
            ans += nums[i];
            if(ans == k){
                fq++;
            }
            if(mp.find(ans - k) != mp.end()){
                fq += mp[ans - k];
            }
            mp[ans]++;
        }
        return fq;
    }
};
