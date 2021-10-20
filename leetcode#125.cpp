class Solution {
    public:
    bool isPalindrome(string s) {
       int l = 0, r = s.length() - 1;
        bool flag = true;
        while (l < r) {
            if (isValidChar(s[l]) && isValidChar(s[r])) {
                if (convertToSmall(s[l]) == convertToSmall(s[r])) {
                    l++;
                    r--;
                } else {
                    flag = false;
                    break;
                }
            } else {
                if (!isValidChar(s[l]))
                    l++;
                if (!isValidChar(s[r]))
                    r--;
            }
        }
        return flag; 
    }
    
    char convertToSmall(char c) {
        if (c >= 'A' && c <= 'Z')
            return c + 32;
        return c;
    }
    
    bool isValidChar(char c) {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
            return true;
        return false;
    }
};
