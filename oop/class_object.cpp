#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int roll;

    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
    }
};

int main() {
    Student s1;
    s1.name = "Kushal";
    s1.roll = 101;

    s1.display();
    return 0;
}
