#include <iostream>
using namespace std;

bool greaterNumber(int num1, int num2) {
    if (num1 > num2) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int firstNumber, secondNumber;
    
    cout << "Enter the first number: ";
    cin >> firstNumber;
    
    cout << "Enter the second number: ";
    cin >> secondNumber;
    
    if (greaterNumber(firstNumber, secondNumber)) {
        cout << "1" <<endl;
    } else {
        cout << "0" <<endl;
    }
    
    return 0;
}