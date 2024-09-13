class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n = arr.size();
        vector<int> pre(n);
        pre[0] = arr[0];

        // compute prefix XOR array
        for (int i = 1; i < n; ++i) {
            pre[i] = pre[i - 1] ^ arr[i];
        }

        vector<int> result(queries.size());

        for (int k = 0; k < queries.size(); ++k) {
            int i = queries[k][0];
            int j = queries[k][1];
            if (i == 0) {
                result[k] = pre[j];
            } else {
                result[k] = pre[j] ^ pre[i - 1];
            }
        }

        return result;
    }
};
