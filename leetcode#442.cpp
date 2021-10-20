class Solution {
    public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();
        vector<int> v(n+1, 0);
        int count = 0;
        
        for (int i = 0; i < n; i++) {
            if (v[nums[i]] == 1) {
                nums[count] = nums[i];
                count++;
            } else {
                v[nums[i]] = 1;
            }
        }
        
        nums.resize(count);
        return nums;
    }
};
