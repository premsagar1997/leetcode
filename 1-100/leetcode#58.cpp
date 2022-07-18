class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.length() - 1;
        int count = 0;
        
        for (; i >= 0; i--) {
            if (s[i] != ' ')
                break;
        }
        
        for (; i >= 0; i--) {
            if (s[i] != ' ')
                count++;
            else
                break;
        }
        
        return count;
    }
};
