#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, rev = "";
    cout << "Enter a string: ";
    cin >> s;

    for (int i = s.length() - 1; i >= 0; i--) {
        rev += s[i];
    }

    if (s == rev)
        cout << "Palindrome string";
    else
        cout << "Not a palindrome string";

    return 0;
}
