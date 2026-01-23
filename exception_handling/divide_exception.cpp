#include <iostream>
#include <stdexcept>   // for runtime_error
using namespace std;

int main() {
    try {
        int a, b;
        cout << "Enter two numbers: ";
        cin >> a >> b;

        // input fail check
        if (cin.fail()) {
            throw runtime_error("Invalid input! Please enter integers only.");
        }

        // divide by zero check
        if (b == 0) {
            throw runtime_error("Cannot divide by zero!");
        }

        cout << "Result = " << (a / b) << endl;
    }
    catch (runtime_error &e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
