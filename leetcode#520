class Solution {
    public:
    bool detectCapitalUse(string word) {
        int n = word.length();
        int c = countCapital(word);
        if (c == 0 || c == n || (c == 1 && word[0] >= 'A' && word[0] <= 'Z'))
            return true;
        return false;
    }
    
    int countCapital(string word) {
        int count = 0;
        for (int i = 0; i < word.length(); i++) {
            if (word[i] >= 'A' && word[i] <= 'Z')
                count++;
        }
        return count;
    }
};
