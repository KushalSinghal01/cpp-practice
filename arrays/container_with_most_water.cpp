#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter number of lines: ";
    cin >> n;

    vector<int> height(n);
    cout << "Enter heights:\n";
    for (int i = 0; i < n; i++) {
        cin >> height[i];
    }

    int left = 0, right = n - 1;
    int maxWater = 0;

    while (left < right) {
        int width = right - left;
        int minHeight = min(height[left], height[right]);
        int currentWater = width * minHeight;

        maxWater = max(maxWater, currentWater);

        // Move the pointer pointing to the smaller height
        if (height[left] < height[right])
            left++;
        else
            right--;
    }

    cout << "Maximum water that can be trapped: " << maxWater << endl;
    return 0;
}
