class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length())
            return false;
        
        int hash1[26];
        int hash2[26];
        for (int i = 0; i < 26; i++) {
            hash1[i] = 0;
            hash2[i] = 0;
        }
        
        for (int i = 0; i < s.length(); i++) {
            hash1[s[i] - 'a']++;
            hash2[t[i] - 'a']++;
        }
        
        bool flag = true;
        for (int i = 0; i < 26; i++) {
            if (hash1[i] != hash2[i])
                flag = false;
        }
        
        return flag;
    }
};
