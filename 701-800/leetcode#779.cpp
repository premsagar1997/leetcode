class Solution {
public:
    int solve(int n, int k) {
        if (n == 1 && k == 1) {
            return 0;
        }

        int mid = pow(2, n - 2);
        if (k <= mid) {
            return solve(n - 1, k);
        } else {
            return 1 - solve(n - 1, k - mid);
            //OR return !solve(n - 1, k - mid);
            // 1 - 0 = 1 (i.e. !0)
            // 1 - 1 = 0 (i.e. !1)
        }

        //n=1 -> 0
        //n=2 -> 0 1
        //n=3 -> 0 1 1 0
        //n=4 -> 0 1 1 0 1 0 0 1
        //n=5 -> 0 1 1 0 1 0 0 1 1 0 0 1 0 1 1 0 
    }

    int kthGrammar(int n, int k) {
        return solve(n, k);
    }
};
