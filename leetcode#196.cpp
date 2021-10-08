class Solution {
  public:
  int majorityElement(vector<int>& nums) {
    int cand, count = 0;
        
    for (int i = 0; i < nums.size(); i++) {
      if (count == 0) {
        cand = nums[i];
      }
      count += cand == nums[i] ? 1 : -1;
    }
        
    return cand;
  }
};