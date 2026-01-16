#include <iostream>
using namespace std;

int main() {
    try {
        int choice;
        cout << "Enter 1 for int error, 2 for char error: ";
        cin >> choice;

        if (choice == 1)
            throw 10;
        else
            throw 'A';
    }
    catch (int x) {
        cout << "Caught integer exception: " << x;
    }
    catch (char c) {
        cout << "Caught character exception: " << c;
    }

    return 0;
}
