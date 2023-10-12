#include <iostream>
#include <string>
using namespace std;

float totalIncome(string screeningType, int rows, int columns) {
    float ticketPrice;

   
    if (screeningType == "Premiere") {
        ticketPrice = 12.00;
    } else if (screeningType == "Normal") {
        ticketPrice = 7.50;
    } else if (screeningType == "Discount") {
        ticketPrice = 5.00;
    } else {
        return 0.0; 
    }

   
    float totalIncome = static_cast<float>(rows) * columns * ticketPrice;

    return totalIncome;
}

int main() {
    string screeningType;
    int numRows, numColumns;

    cout << "Enter the screening type (Premiere/Normal/Discount): ";
    cin >> screeningType;

    cout << "Enter the number of rows: ";
    cin >> numRows;

    cout << "Enter the number of columns: ";
    cin >> numColumns;

    float income = totalIncome(screeningType, numRows, numColumns);

    if (income == 0.0) {
        cout << "Invalid screening type." << endl;
    } else {
        cout  << income <<  endl;
    }

    return 0;
}