class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int numTracter = 0;
        int minInc = 0;

        for (int n: nums) {
            numTracter = max(numTracter, n);
            minInc += numTracter - n;
            numTracter += 1;
        }

        return minInc;
    }
};

