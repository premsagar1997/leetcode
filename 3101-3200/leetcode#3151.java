class Solution {
    public boolean isArraySpecial(int[] nums) {
        boolean special = true;

        for (int i = 0; i < nums.length - 1; i++) {
            if ((nums[i] % 2 == 0 && nums[i + 1] % 2 == 0) ||
            (nums[i] % 2 != 0 && nums[i + 1] % 2 != 0)) {
                special = false;
            }
        }

        return special;
    }
}
