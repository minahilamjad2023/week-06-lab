#include <iostream>
using namespace std;

int findGreatest(int num1, int num2, int num3) {
    if (num1 >= num2) {
        if (num1 >= num3) {
            return num1;
        } else {
            return num3;
        }
    } else {
        if (num2 >= num3) {
            return num2;
        } else {
            return num3;
        }
    }
}

int main() {
    int firstNumber, secondNumber, thirdNumber;

    cout << "Enter the first number: ";
    cin >> firstNumber;

    cout << "Enter the second number: ";
    cin >> secondNumber;

    cout << "Enter the third number: ";
    cin >> thirdNumber;

    int greatest = findGreatest(firstNumber, secondNumber, thirdNumber);

cout << "The greatest number among " << firstNumber << ", " << secondNumber << ", and " << thirdNumber << " is: " << greatest << endl;

    return 0;
}