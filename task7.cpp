#include <iostream>
#include <string>
using namespace std;

double applyDiscount(string& day, string& month, double totalAmount) {
    if ((day == "Sunday") && (month == "October" || month == "March" || month == "August")) 
    {
        return totalAmount - (0.10 * totalAmount); 
    } else {
        return totalAmount; 
    }
}

int main() {
    string purchaseDay, purchaseMonth;
    double purchaseAmount;

    cout << "Enter Purchase Day: ";
    cin >> purchaseDay;

    cout << "Enter Purchase Month: ";
    cin >> purchaseMonth;

    cout << "Enter Purchase Amount: ";
    cin >> purchaseAmount;

    double payableAmount = applyDiscount(purchaseDay, purchaseMonth, purchaseAmount);

    cout << "Payable Amount after discount: " << payableAmount << endl;

    return 0;
}