/**
  Unique Binary Search Tree
  Given an integer n, return the number of structurally unique BST's (binary search trees) which has exactly n nodes of unique values from 1 to n.
**/

class Solution {
    public int numTrees(int n) {
        if (n == 0 || n == 1) return 1;

        int[] dp = new int[n + 1];
        dp[0] = 1;
        dp[1] = 1;
        dp[2] = 2;

        for (int i = 3; i <= n; i++) {
            int sum = 0;
            for (int j = 1; j <= i; j++) {
                int leftBSTs = dp[j - 1];
                int rightBSTs = dp[i - j];
                sum += (leftBSTs * rightBSTs);
            }
            dp[i] = sum;
        }

        return dp[n];
    }
}
