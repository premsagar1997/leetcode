class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        int n = nums.size();

        sort(begin(nums), end(nums));

        int count = 1;
        int j = 0;
        for (int i = 1; i < n; i++) {
            if (nums[i] - nums[j] > k) {
                j = i;
                count++;
            }
        }
        return count;
    }
};
