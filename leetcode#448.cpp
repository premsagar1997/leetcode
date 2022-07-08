class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            int curr = abs(nums[i]);
            nums[curr-1] = -(abs(nums[curr-1]));
        }
        
        vector<int> res;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0)
                res.push_back(i+1);
        }
        
        return res;
    }
};
