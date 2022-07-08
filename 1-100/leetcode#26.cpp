class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0)
            return 0;
        
        int count = 0;
        for (int i = 1, len = nums.size(); i < len; i++) {
            if (nums[count] != nums[i])
                nums[++count] = nums[i];
        }
        return (count + 1);
    }
};
