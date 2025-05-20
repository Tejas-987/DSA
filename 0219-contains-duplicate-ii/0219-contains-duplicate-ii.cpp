#include <vector>
#include <unordered_map>
#include <cmath>

using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> numIndexMap;

        for (int i = 0; i < nums.size(); ++i) {
            
            if (numIndexMap.find(nums[i]) != numIndexMap.end() && abs(i - numIndexMap[nums[i]]) <= k) {
                return true;
            }
            numIndexMap[nums[i]] = i;
        }

        return false;
    }
};
