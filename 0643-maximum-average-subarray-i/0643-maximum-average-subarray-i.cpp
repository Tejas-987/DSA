#include <vector>

using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        int currentSum = 0;
        int maxSum = INT_MIN; 
        for (int i = 0; i < k; ++i) {
            currentSum += nums[i];
        }

        maxSum = currentSum; 
       
        for (int i = k; i < n; ++i) {
            currentSum += nums[i] - nums[i - k];
            maxSum = max(maxSum, currentSum); 
        }
        return static_cast<double>(maxSum) / k;
    }
};
