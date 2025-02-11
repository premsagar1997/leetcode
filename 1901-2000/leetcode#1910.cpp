// Method 1
class Solution {
public:
    string removeOccurrences(string s, string part) {
        while (true) {
            int idx = s.find(part);

            if (idx == string::npos) {
                break;
            }

            s.erase(idx, part.length());
        }

        return s;
    }
};

// Method 2
class Solution {
public:
    bool checkIfExist(stack<char>& st, string& part, int m) {
        stack<char> tempSt = st;

        for (int i = m - 1; i >= 0; i--) {
            if (tempSt.top() != part[i]) {
                return false;
            } else {
                tempSt.pop();
            }
        }

        return true;
    }

    string removeOccurrences(string s, string part) {
        stack<char> st;
        int n = s.length();
        int m = part.length();

        for (int i = 0; i < n; i++) {
            st.push(s[i]);
            if (st.size() >= m && checkIfExist(st, part, m)) {
                int j = m;
                while (j > 0) {
                    st.pop();
                    j--;
                }
            }
        }

        string res = "";
        while (!st.empty()) {
            res = st.top() + res;
            st.pop();
        }

        return res;
    }
};

