class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        vector<int> charCount(26, 0);

        for (int i = 0; i < chars.length(); i++) {
            charCount[chars[i] - 'a']++;
        }

        int count = 0;

        for (int i = 0; i < words.size(); i++) {
            string word = words[i];
            vector<int> wordCount(26, 0);

            for (int i = 0; i < word.length(); i++) {
                wordCount[word[i] - 'a']++;
            }

            bool isOk = true;
            for (int i = 0; i < 26; i++) {
                if (wordCount[i] > charCount[i]) {
                    isOk = false;
                    break;
                }
            }

            if (isOk == true) {
                count += word.length();
            }
        }

        return count;
    }
};
