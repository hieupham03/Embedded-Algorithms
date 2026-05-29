class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (char c : s) {
            if (c == '(' || c == '[' || c == '{') {
                st.push(c);
            } 
            else {
                if (st.empty()) return false;

                char a = st.top();
                st.pop();

                if (c == ')' && a != '(') return false;
                if (c == ']' && a != '[') return false;
                if (c == '}' && a != '{') return false;
            }
        }

        return st.empty();
    }
};