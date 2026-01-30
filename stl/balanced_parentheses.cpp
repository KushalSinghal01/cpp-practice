#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter expression: ";
    cin >> s;

    stack<char> st;
    bool balanced = true;

    for (char c : s) {
        if (c == '(' || c == '{' || c == '[') {
            st.push(c);
        } else {
            if (st.empty()) {
                balanced = false;
                break;
            }
            char top = st.top();
            st.pop();

            if ((c == ')' && top != '(') ||
                (c == '}' && top != '{') ||
                (c == ']' && top != '[')) {
                balanced = false;
                break;
            }
        }
    }

    if (!st.empty()) balanced = false;

    if (balanced)
        cout << "Balanced parentheses";
    else
        cout << "Not balanced";

    return 0;
}
