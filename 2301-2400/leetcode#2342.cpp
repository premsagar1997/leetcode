class Solution {
public:
    int sumOfDigit(int n) {
        int sum = 0;
        while (n > 0) {
            int r = n % 10;
            sum += r;
            n = n / 10;
        }
        return sum;
    }

    int maximumSum(vector<int>& nums) {
        unordered_map<int, int> mp;

        int result = -1;

        for (int i = 0; i < nums.size(); i++) {
            int sum = sumOfDigit(nums[i]);
            if (mp.count(sum) > 0) {
                result = max(result, nums[i] + mp[sum]);
                mp[sum] = max(nums[i], mp[sum]);
            } else {
                mp[sum] = nums[i];
            }
        }

        return result;
    }
};
