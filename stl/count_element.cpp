#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 2, 4, 2, 5};
    int key;

    cout << "Enter element to count: ";
    cin >> key;

    int freq = count(v.begin(), v.end(), key);

    cout << "Frequency of " << key << " is: " << freq;
    return 0;
}
