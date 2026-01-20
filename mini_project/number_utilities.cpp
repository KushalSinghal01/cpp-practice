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

int sumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += (n % 10);
        n /= 10;
    }
    return sum;
}

bool isEven(int n) {
    return n % 2 == 0;
}

int main() {
    int choice, n;

    do {
        cout << "\n========== Number Utilities ==========\n";
        cout << "1. Reverse a number\n";
        cout << "2. Check Palindrome\n";
        cout << "3. Check Prime\n";
        cout << "4. Check Armstrong\n";
        cout << "5. Sum of Digits\n";
        cout << "6. Check Even/Odd\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 0) {
            cout << "Exiting program...\n";
            break;
        }

        if (choice < 0 || choice > 6) {
            cout << "Invalid choice! Please try again.\n";
            continue;
        }

        cout << "Enter a number: ";
        cin >> n;

        if (n < 0) {
            cout << "Please enter a positive number.\n";
            continue;
        }

        switch (choice) {
            case 1:
                cout << "Reversed number: " << reverseNumber(n) << endl;
                break;

            case 2:
                cout << (isPalindrome(n) ? "Palindrome number\n" : "Not a palindrome number\n");
                break;

            case 3:
                cout << (isPrime(n) ? "Prime number\n" : "Not a prime number\n");
                break;

            case 4:
                cout << (isArmstrong(n) ? "Armstrong number\n" : "Not an Armstrong number\n");
                break;

            case 5:
                cout << "Sum of digits: " << sumOfDigits(n) << endl;
                break;

            case 6:
                cout << (isEven(n) ? "Even number\n" : "Odd number\n");
                break;
        }

    } while (true);

    return 0;
}
