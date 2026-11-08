#include <iostream>
using namespace std;

int readNuminRange(int from, int to) {

    int num;
    cout << "Enter a number Between " << from << " and " << to << endl;
    cin >> num;

    while (num < from || num > to) {

        cout << "Wrong number!\n";
        cout << "Try again... \n";
        cout << "Enter a number Between " << from << " and " << to << endl;
        cin >> num;

    }
    return num;
}

void print_numFrom1_to_N() {
    int n;
    cout << "Enter N: " << endl;
    cin >> n;
    int i = 1;
    while (n >= i) {
        cout << i << endl;
        i++;
    }
}

void print_numFrom_N_to1() {
    int n;
    cout << "Enter n : ";
    cin >> n;
    while (n >= 1) {
        cout << n << endl;
        n--;
    }
}

int sum_odd_numbers() {

    int num;
    int result = 0;
    cout << "Enter the numbers : ";
    cin >> num;
    while (num >= 1) {
        if (num % 2 != 0) {
            result += num;
        }
        num--;
    }

    return result;
}

int sum_Even_numbers() {

    int num;
    int result2 = 0;
    cout << "Enter the numbers : ";
    cin >> num;
    while (num >= 1) {
        if (num % 2 == 0) {
            result2 += num;
        }
        num--;
    }

    return result2;
}

void Factorial_of_N(int num) {
    cout << "Enter a num: " << endl;
    cin >> num;
    int the_result_of_factorial = 1;

    while (num != 0) {

        if (num > 0) {
            the_result_of_factorial = num * the_result_of_factorial;
            num--;
        }
        else {
            cout << "The number must be positive...try again" << endl;
            cout << "Enter a num: " << endl;
            cin >> num;
        }
    }

    cout << the_result_of_factorial << endl;
}

int Power_of_n(int num, int n) {
    int total = 1;

    while (n > 0) {
        total = num * total;
        n--;
    }

    return total;
}

int Sum_Until() {
    int num;
    cout << "Enter a num: (enter -99 to end)" << endl;
    cin >> num;
    int sum = 0;

    while (num != -99) {
        sum += num;
        cout << "Enter a num: (enter -99 to end)" << endl;
        cin >> num;
    }

    return sum;
}

void Print_letters_from_A_Z() {

    int num_of_letters = 65;
    while (num_of_letters != 91) {
        cout << char(num_of_letters) << endl;
        num_of_letters++;
    }
}

void ATM_PIN_3_Times() {
    int Pin_code;
    int counter = 3;
    bool access_granted = false;

    while (counter > 0) {
        cout << "Sir please enter the PIN code (You have " << counter << " attempts)" << endl;
        cin >> Pin_code;

        if (Pin_code == 1234) {
            cout << "Your balance is 5000" << endl;
            access_granted = true;
            break;
        }
        else {
            counter--;
        }
    }

    if (!access_granted) {
        cout << "Your account is locked..." << endl;
    }
}

int main() {

    // ReadNuminRange:
    // int result = readNuminRange(1, 20);
    // cout << "\nThe number is: " << result << endl;

    // 26
    // print_numFrom1_to_N();

    // 27
    // print_numFrom_N_to1();

    // 28
    // int result_of_sum_odd = sum_odd_numbers();
    // cout << "Sum odd numbers : " << result_of_sum_odd << endl;

    // 29
    // int result_of_sum_even = sum_Even_numbers();
    // cout << "Sum Even numbers : " << result_of_sum_even << endl;

    // 30
    // int num = 0;
    // Factorial_of_N(num);

    // 32
    // int num, n;
    // cout << "Please enter a num : " << endl;
    // cin >> num;
    // cout << "Please enter n : " << endl;
    // cin >> n;
    // cout << num << " Power of " << n << " = " << Power_of_n(num, n) << endl;

    // 37
    // cout << Sum_Until() << endl;

    // 46
    // Print_letters_from_A_Z();

    // 50
    ATM_PIN_3_Times();

    return 0;
}
