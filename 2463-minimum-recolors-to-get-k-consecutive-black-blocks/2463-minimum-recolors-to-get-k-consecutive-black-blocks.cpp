class Solution 
{
public:
    int minimumRecolors(string blocks, int k) 
    { int n = blocks.size();
        if (n < k) {
            return -1; // Edge case where n is less than k
        }

        // Compute the number of 'W' in the first window of size k
        int cnt = 0;
        for (int i = 0; i < k; i++) {
            if (blocks[i] == 'W') cnt++;
        }

        int mini = cnt;

        // Slide the window across the string
        for (int i = k; i < n; i++) {
            // Adjust the count of 'W' for the new window
            if (blocks[i] == 'W') cnt++;
            if (blocks[i - k] == 'W') cnt--;

            // Update the minimum count of 'W'
            mini = min(mini, cnt);
        }

        return mini;
    }
};