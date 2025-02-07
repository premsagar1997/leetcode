class Solution {
    public boolean areAlmostEqual(String s1, String s2) {
        if (s1.equals(s2)) return true;

        ArrayList<Character> notMatched = new ArrayList<>();
        int j = 0;
        int c = 0;
        for (int i = 0; i < s1.length(); i++) {
            if (s1.charAt(i) != s2.charAt(i)) {
                notMatched.add(s1.charAt(i));
                notMatched.add(s2.charAt(i));
                c++;
            }
            if (c > 2) return false;
        }

       return notMatched.size() == 4 &&
            notMatched.get(0) == notMatched.get(3) &&
            notMatched.get(1) == notMatched.get(2);
    }
}
