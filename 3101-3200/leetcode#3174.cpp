class Solution {
public:
    string clearDigits(string s) {
        stack<char> v;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] >= '0' && s[i] <= '9') {
                if (!v.empty()) {
                    v.pop();
                }
            } else {
                v.push(s[i]);
            }
        }

        string res = "";
        while(!v.empty()) {
            res = v.top() + res;
            v.pop();
        }

        return res;
    }
};
