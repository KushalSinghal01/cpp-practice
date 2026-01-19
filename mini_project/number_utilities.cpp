#include <iostream>
using namespace std;

int reverseNumber(int n) {
    int rev = 0;
    while (n > 0) {
        rev = rev * 10 + (n % 10);
        n = n / 10;
    }
    return rev;
}

bool isPalindrome(int n) {
    return n == reverseNumber(n);
}

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

bool isArmstrong(int n) {
    int temp = n, sum = 0;
    while (temp > 0) {
        int d = temp % 10;
        sum += d * d * d;
        temp /= 10;
    }
    return sum == n;
}

int main() {
    int choice, n;

    do {
        cout << "\n====== Number Utilities Menu ======\n";
        cout << "1. Reverse a number\n";
        cout << "2. Check Palindrome\n";
        cout << "3. Check Prime\n";
        cout << "4. Check Armstrong\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 0) {
            cout << "Exiting program...\n";
            break;
        }

        cout << "Enter a number: ";
        cin >> n;

        switch (choice) {
            case 1:
                cout << "Reversed number: " << reverseNumber(n) << endl;
                break;

            case 2:
                if (isPalindrome(n))
                    cout << "Palindrome number\n";
                else
                    cout << "Not a palindrome number\n";
                break;

            case 3:
                if (isPrime(n))
                    cout << "Prime number\n";
                else
                    cout << "Not a prime number\n";
                break;

            case 4:
                if (isArmstrong(n))
                    cout << "Armstrong number\n";
                else
                    cout << "Not an Armstrong number\n";
                break;

            default:
                cout << "Invalid choice! Try again.\n";
        }

    } while (choice != 0);

    return 0;
}
