class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        int n = words.size();
        vector<int> v(26, INT_MAX);
        vector<string> ans;

        for (int i = 0; i < n; i++) {
            vector<int> t(26, 0);
            string word = words[i];
            for (int j = 0; j < word.length(); j++) {
                t[word[j] - 'a']++;
            }
            for (int k = 0; k < 26; k++) {
                v[k] = min(v[k], t[k]);
            }
        }


        for (int i = 0; i < 26; i++) {
            for (int j = 0; j < v[i]; j++) { 
                ans.push_back(string(1, i + 'a'));
            }
        }

        return ans;
    }
};
