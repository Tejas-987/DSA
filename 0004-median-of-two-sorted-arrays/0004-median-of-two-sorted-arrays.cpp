#include <vector>
#include <algorithm>
#include <cmath>

class Solution {
public:
    double findMedianSortedArrays(std::vector<int>& nums1, std::vector<int>& nums2) {
        std::vector<int> merged(nums1.size() + nums2.size());
        std::merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), merged.begin());
        std::sort(merged.begin(), merged.end());
        int n = merged.size();
        double med;
        if (n % 2 == 0)
            med = (merged[n / 2 - 1] + merged[n / 2]) / 2.0; // Floating-point division
        else
            med = merged[n / 2];
        return med;
    }
};
