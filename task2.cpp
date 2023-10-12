#include <iostream>
using namespace std;

bool parityAnalysis(int number) {
    
    int digit1 = number % 10;
    int digit2 = (number / 10) % 10;
    int digit3 = number / 100;
    
 
    int digitSum = digit1 + digit2 + digit3;
    
   
    if ((number % 2 == 0 && digitSum % 2 == 0) || (number % 2 != 0 && digitSum % 2 != 0)) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int number;
    
    cout << "Enter a 3-digit number: ";
    cin >> number;
    
    bool result = parityAnalysis(number);
    
    cout << result << endl;
    
    return 0;
}