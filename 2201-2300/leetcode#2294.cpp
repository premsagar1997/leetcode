class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        int n = nums.size();

        sort(begin(nums), end(nums));

        int count = 1;
        int minVal = nums[0];
        for (int i = 0; i < n; i++) {
            if (nums[i] - minVal > k) {
                minVal = nums[i];
                count++;
            }
        }
        
        return count;
    }
};
