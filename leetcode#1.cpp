class Solution {
  public:
  vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> v;
    vector<int>::iterator itr, it;
    v.reserve(2);
    for (int i = 0; i < nums.size(); i++) {
      for (int j = 0; j < nums.size(); j++) {
        if (i != j && (nums.at(i) + nums.at(j) == target)) {
          v.push_back(i);
          v.push_back(j);
          goto end;
        }
      }
    }
    end:
    return v;
  }
};