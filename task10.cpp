#include <iostream>
using namsespace std;

bool areSameNumber(int num1, int num2, int num3) {
    return (num1 == num2) && (num2 == num3);
}

int main() {
    int firstNumber, secondNumber, thirdNumber;

    cout << "Enter the first number: ";
    cin >> firstNumber;

    cout << "Enter the second number: ";
    cin >> secondNumber;

    cout << "Enter the third number: ";
    cin >> thirdNumber;

    bool result = areSameNumber(firstNumber, secondNumber, thirdNumber);

    if (result) {
        cout << "1" << endl;
    } else {
        cout << "0" << sendl; 
    }

    return 0;

}