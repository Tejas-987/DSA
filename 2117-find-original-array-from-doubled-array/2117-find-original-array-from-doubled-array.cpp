class Solution {
public:
    vector<int> findOriginalArray(vector<int>& ch) {
        int n = ch.size();
        if (n % 2 != 0) return {}; // If size is odd, return empty array

        vector<int> ans;
        map<int, int> mp;

        // Count frequencies
        for (auto num : ch) mp[num]++;

        // Sort the array
        sort(ch.begin(), ch.end());

        for (auto num : ch) {
            if (mp[num] == 0) continue;  // If already used, skip

            if (mp[num * 2] == 0) return {};  // If no doubled pair exists, return {}

            // Store the original number
            ans.push_back(num);

            // Reduce frequency
            mp[num]--;
            mp[num * 2]--;
        }

        return ans;
    }
};
