class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int n = numRows;
        vector<vector<int>> res;
        
        if (n == 1) {
            res.push_back({1});
        } else if (n == 2) {
            res.push_back({1});
            res.push_back({1, 1});
        } else {
            res.push_back({1});
            res.push_back({1, 1});
            int level = 2;
            for (int i = 1; i < n - 1; i++) {
                vector<int> v;
                for (int j = 0; j <= level; j++) {
                    if (j == 0)
                        v.push_back(res[i][0]);
                    else if (j == level)
                        v.push_back(res[i][level-1]);
                    else
                        v.push_back(res[i][j-1] + res[i][j]);
                }
                level++;
                res.push_back(v);
            }
        }
        
        return res;
    }
};
