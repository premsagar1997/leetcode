class Solution {
public:
    int fib(int n) {
        if (n <= 1)
            return n;
        
        int f0 = 0, f1 = 1;
        for (int i = 2; i <= n; i++) {
            int f2 = f0 + f1;
            f0 = f1;
            f1 = f2;
        }
        
        return f1;
    }
};


// Method 2: Using DP
class Solution {
    public:
    int solve(int n, vector<int> &dp) {
        // BASE CASE
        if (n <= 1) return n;

        if (dp[n] != -1) return dp[n];

        return dp[n] = solve(n - 1, dp) + solve(n - 2, dp);
    }

    int fib(int n) {
        vector<int> dp(31, -1);
        dp[0] = 0;
        dp[1] = 1;
        return solve(n, dp);
    }
};
