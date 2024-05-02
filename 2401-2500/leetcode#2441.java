class Solution {
    public int findMaxK(int[] nums) {
        HashSet<Integer> hash = new HashSet<>();
        int largest = -1;
        for (int num: nums) {
            hash.add(num);
            int n = num * (-1);
            if (hash.contains(n)) {
                largest = Math.max(largest, Math.abs(num));
            }
        }

        return largest;
    }
}
