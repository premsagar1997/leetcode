// Approach 1
class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int> mp;

        for (int i = 0; i < s.length(); i++) {
            char c = s[i];
            mp[c]++;
        }

        for (int i = 0; i < t.length(); i++) {
            char c = t[i];
            mp[c]--;

            if (mp[c] < 0) {
                return c;
            }
        }

        return 'x';
    }
};

// Approach 2
class Solution {
public:
    char findTheDifference(string s, string t) {
        int sum_ss = 0;
        int sum_tt = 0;

        for (int i = 0; i < s.length(); i++) {
            sum_ss += s[i];
        }

        for (int i = 0; i < t.length(); i++) {
            sum_tt += t[i];
        }

        return (char)(sum_tt - sum_ss);
    }
};

// Approach 3
class Solution {
public:
    char findTheDifference(string s, string t) {
        int XOR = 0;

        for (int i = 0; i < s.length(); i++) {
            XOR ^= s[i];
        }

        for (int i = 0; i < t.length(); i++) {
            XOR ^= t[i];
        }

        return (char)(XOR);
    }
};
