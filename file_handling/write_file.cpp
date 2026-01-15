#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("data.txt");

    if (file.is_open()) {
        file << "Hello, this is file handling in C++.\n";
        file << "Learning GitHub + C++ step by step.\n";
        file.close();
        cout << "Data written to file successfully.";
    } else {
        cout << "Unable to open file.";
    }

    return 0;
}
