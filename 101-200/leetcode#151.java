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

// ---------------------
// Using Two Pointers
class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(), s.end());

        int i = 0;
        int l = 0;
        int r = 0;
        int n = s.length();

        while (i < n) {
            // assign s[r] = s[i] until space encounter
            while (i < n && s[i] != ' ') {
                s[r] = s[i];
                i++;
                r++;
            }

            // check is l is less than r
            if (l < r) {
                // reverse sub string from l to r
                reverse(s.begin() + l, s.begin() + r);
                s[r] = ' '; // after sub string reverse, add space
                r++;

                l = r; // move l pointer to r
            }

            i++;
        }

        s = s.substr(0, r - 1);
        return s;
    }
};
