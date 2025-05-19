class Solution {
public:
    int fib(int n) {
        vector<int> store(n + 1, -1);  // Use -1 to mark uncomputed values
        return help(n, store);
    }

private:
    int help(int n, vector<int>& store) {  
        if (n == 0 || n == 1) return n;  

        if (store[n] != -1) return store[n];  

        store[n] = help(n - 1, store) + help(n - 2, store);  
        return store[n];
    }
};
