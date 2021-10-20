class Solution {
    public:
    bool isValid(string s) {
        stack<char> st;
        for (int i = 0, n = s.length(); i < n; i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                st.push(s[i]);
            } else if (!st.empty()) {
                char c = st.top();
                if ((s[i] == ')' && c == '(') || (s[i] == '}' && c == '{') || (s[i] == ']' && c == '['))
                    st.pop();
                else
                    st.push(s[i]);
            } else {
                st.push(s[i]);
            }
        }
        return st.empty();
    }
};
