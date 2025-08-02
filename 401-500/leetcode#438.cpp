class Solution {
public:
    bool allZero(vector<int>& counts) {
        for (int &c: counts) {
            if (c != 0)
                return false;
        }
        return true;
    }

    vector<int> findAnagrams(string s, string p) {
        int n = s.length();
        int k = p.length();

        vector<int> counts(26, 0);

        for (char ch: p) {
            counts[ch - 'a']++;
        }

        int i = 0, j = 0;
        vector<int> result;

        while (j < n) {
            counts[s[j] - 'a']--;

            if (j - i + 1 == k) {
                if (allZero(counts)) {
                    result.push_back(i);
                }
                
                counts[s[i] - 'a']++;
                i++;
            }

            j++;
        }

        return result;
    }
};
