class Solution {
    public String reverseWords(String s) {
        String str[] = s.split(" ");
        StringBuffer sb = new StringBuffer();
        for (int i = str.length - 1; i >=0; i--) {
            if (!str[i].isEmpty()) {
                sb.append(str[i]);
                if (i != 0)
                    sb.append(" ");
            }
        }
        return sb.toString().trim();
    }
}
