#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "enter the first number: ";
    cin >> num1;
    cout << "enter the second number: ";
    cin >> num2;

    if (num1 == num2) {
        cout << "the two numbers are equal." << endl;
    }
    else {
        cout << "the two numbers are not equal." << endl;
    }

    return 0;
}
