#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<int> nextGreaterElement(std::vector<int>& nums1, std::vector<int>& nums2) {
        std::vector<int> ans;
        for(int i = 0; i < nums1.size(); i++) {
            auto k = std::find(nums2.begin(), nums2.end(), nums1[i]);
            int l = std::distance(nums2.begin(), k);
            for(l; l < nums2.size(); l++) {
                if(nums2[l] > *k) {
                    ans.push_back(nums2[l]);
                    break;
                }
            }
            if (l == nums2.size()) {
                ans.push_back(-1);
            }
        }
        return ans;
    }
};
