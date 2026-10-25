#include <iostream>
using namespace std;

// Print numbers from 1 to n.
void from1_to_n(int n) {
    for (int i = 1; i <= n; i++)
        cout << i << endl;
}

// Print numbers from n down to 1.
void fromn_to_1(int n) {
    for (; n != 0; n--)
        cout << n << endl;
}

// Return the sum of odd numbers from 0 to n.
int sum_odd_numbers(int n) {
    int sum = 0;

    for (int counter = 0; counter <= n; counter++) {
        if (counter % 2 != 0) {
            sum = sum + counter;
        }
    }
    return sum;
}

// Return the sum of even numbers from 0 to n.
int sum_even_numbers(int n) {
    int sum = 0;
    for (int counter = 0; counter <= n; counter++) {
        if (counter % 2 == 0) {
            sum = sum + counter;
        }
    }
    return sum;
}

// Return n! (factorial of n).
int factorial_of_n(int n) {
    int factorial = 1;
    for (; n >= 1; n--)
        factorial = factorial * n;
    return factorial;
}

// Return num raised to the power m.
int power_of_m(int num, int m) {
    int p = 1;

    for (int counter = 0; counter < m; counter++) {
        p = p * num;
    }

    return p;
}

// Print uppercase letters A-Z and lowercase letters a-z.
void capital_letter() {
    for (int counter = 65; counter <= 90; counter++) {
        cout << char(counter) << endl;
    }

    for (int counter2 = 97; counter2 <= 122; counter2++) {
        cout << char(counter2) << endl;
    }
}

int main() {
    // for (initialization; condition; update) {
    //     Body of loop
    // }

    // Homework example:
    // int num, m;
    // cout << "Enter a num: " << endl;
    // cin >> num;
    // cout << "Enter M: " << endl;
    // cin >> m;
    // int x = power_of_m(num, m);
    // cout << "Power of m = " << x << endl;

    capital_letter();

    return 0;
}
