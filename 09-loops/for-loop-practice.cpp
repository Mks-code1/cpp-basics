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

// Print multiplication tables from 1 to 10 using nested loops.
void nested_for_loop() {
    for (int i = 1; i <= 10; i++) {
        cout << "i=" << i << endl;

        for (int j = 1; j <= 10; j++) {
            cout << i << " * " << j << "= " << i * j << endl;
        }

        cout << "--------------------|\n";
    }
}

// Print every pair of uppercase letters (A-Z).
void print_letters_00() {
    for (int i = 65; i <= 90; i++) {
        for (int j = 65; j <= 90; j++) {
            cout << char(i) << ":" << char(j) << endl;
        }
    }
}

// Print an increasing sequence of letters on each line.
void print_letters_01() {
    for (int i = 65; i <= 90; i++) {
        for (int j = 65; j <= i; j++) {
            cout << char(j);
        }
        cout << "\n";
    }
}

// Print an increasing number sequence on each line.
void print_numbers_00() {
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        cout << "\n";
    }
}

// Print decreasing rows of numbers.
void print_numbers_01() {
    for (int i = 10; i >= 1; i--) {
        for (int j = 1; j < i; j++) {
            cout << j;
        }
        cout << "\n";
    }
}

// Print an increasing triangle of stars.
void line_of_stars_00() {
    for (int i = 0; i <= 10; i++) {
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }
        cout << "\n";
    }
}

// Print a decreasing triangle of stars.
void line_of_stars_01() {
    for (int i = 10; i >= 1; i--) {
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << "\n";
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

    // Nested loop exercises:
    // nested_for_loop();
    // line_of_stars_00();
    // line_of_stars_01();
    // print_letters_00();
    // print_letters_01();
    // print_numbers_00();
    // print_numbers_01();

    capital_letter();

    return 0;
}
