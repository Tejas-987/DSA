#include <vector>
#include <queue>
#include <numeric>  // for accumulate

using namespace std;

class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int> maxHeap(piles.begin(), piles.end()); // Max heap
        while (k-- > 0) {
            int largest = maxHeap.top(); maxHeap.pop();
            largest -= largest / 2;  // Remove floor(largest/2) stones
            maxHeap.push(largest);
        }

        // Sum up the remaining stones
        int total = 0;
        while (!maxHeap.empty()) {
            total += maxHeap.top();
            maxHeap.pop();
        }
        return total;
    }
};
