class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        bool isCounting = false;
        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] != ' ') {
                count++;
                isCounting = true;
            } else if (isCounting) {
                break;
            }
        }

        return count;
    }
};
