#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    try {
        if (age < 18)
            throw age;

        cout << "Access granted!";
    }
    catch (int a) {
        cout << "Access denied! Age must be 18 or above.";
    }

    return 0;
}
