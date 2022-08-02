class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n = matrix.size();
        vector<int> v(n*n, 0);
        int index = 0;
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                v[index++] = matrix[i][j];
            }
        }
        
        sort(v.begin(), v.end());
        
        return v[k - 1];
    }
};
