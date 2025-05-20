class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        // Step 1: Sort based on the second element (ending value)
        sort(pairs.begin(), pairs.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[1] < b[1]; // Sort by end time (greedy strategy)
        });

        int count = 0;
        int lastEnd = INT_MIN; // Initialize to the smallest possible value

        // Step 2: Greedy selection
        for (const auto& pair : pairs) {
            if (pair[0] > lastEnd) { // If this pair can be added to the chain
                count++;
                lastEnd = pair[1]; // Update the last selected pair's end time
            }
        }

        return count; // Return the length of the longest chain
    }
};