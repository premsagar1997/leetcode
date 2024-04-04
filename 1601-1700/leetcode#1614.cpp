class Solution {
public:
    int maxDepth(string s) {
        int count = 0, maxDepth = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(') {
                count++;
                if (count > maxDepth) {
                    maxDepth = count;
                }
            } else if (s[i] == ')') {
                count--;
            }
        }

        return maxDepth;
    }
};
