#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    if (num1 > num2) {
        cout << "the first number is the maximun "<< endl;
    }
    else if (num2 > num1) {
        cout <<"the second number is the maximun " << endl;
    }
    else {
        cout << "the two numbers are equal." << endl;
    }

    return 0;
}
