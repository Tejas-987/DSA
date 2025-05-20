class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        vector<int> seive = se(right);
        vector<int> pno;
        
        for (int i = left; i <= right; i++) { // Fixed variable name from 'l' to 'i'
            if (seive[i] == 1) pno.push_back(i);
        }

        if (pno.size() < 2) return {-1, -1};

        int mind = INT_MAX; // Fixed 'mindd' to 'mind'
        vector<int> clos = {-1, -1}; // Fixed incorrect initialization

        for (int i = 1; i < pno.size(); i++) {
            int diff = pno[i] - pno[i - 1];
            if (mind > diff) { // Fixed 'mind>' to 'mind >'
                mind = diff;
                clos[0] = pno[i - 1];
                clos[1] = pno[i];
            }
        }

        return clos;
    }

private:
    vector<int> se(int t) {
        vector<int> p(t + 1, 1);
        p[0] = 0;
        p[1] = 0; // Fixed missing semicolon

        for (int i = 2; i * i <= t; i++) { // Added proper loop condition for sieve
            if (p[i]) { // Check if the number is prime
                for (int y = i * i; y <= t; y += i) { // Fixed loop condition
                    p[y] = 0; // Fixed missing semicolon
                }
            }
        }

        return p;
    }
};
