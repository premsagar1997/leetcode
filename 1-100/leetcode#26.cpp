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

// --------------------------------
// Using Two Pointers approach:
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int j = 1;

        while (j < n) {
            if (nums[i] != nums[j]) { //if both elements are not same
                i++;
                nums[i] = nums[j];
            }

            j++; //look for next unique element in array
        }

        return i + 1;
    }
};
