class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        int N = 1001;
        int hash[N];
        memset(hash, 0, sizeof(hash));
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            if (nums[i] == key) {
                int prevIdx = max(0, i-k);
                int nextIdx = min(n-1, i+k);
                while (prevIdx <= nextIdx) {
                    hash[prevIdx] = 1;
                    prevIdx++;
                }
            }
        }

        vector<int> result;
        for (int i = 0; i < N; i++) {
            if (hash[i] == 1)
                result.push_back(i);
        }

        return result;
    }
};
