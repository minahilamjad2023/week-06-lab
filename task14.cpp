#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

string calculateCost(float budget, string category, int numPeople) 
{
   
    const float VIP_PRICE = 499.99;
    const float NORMAL_PRICE = 249.99;
   
    float transportationCost;
    if (numPeople >= 1 && numPeople <= 4) {
        transportationCost = 0.75 * budget;
    } else if (numPeople >= 5 && numPeople <= 9) {
        transportationCost = 0.60 * budget;
    } else if (numPeople >= 10 && numPeople <= 24) {
        transportationCost = 0.50 * budget;
    } else if (numPeople >= 25 && numPeople <= 49) {
        transportationCost = 0.40 * budget;
    } else {
        transportationCost = 0.25 * budget;
    }

    
    float ticketCost = (category == "VIP")  VIP_PRICE : NORMAL_PRICE;


    float totalCost = numPeople * ticketCost + transportationCost;

    if (budget >= totalCost) {
        float moneyLeft = budget - totalCost;
        return "Yes! You have " + to_string(moneyLeft) + " leva left.";
    } else {
        float moneyNeeded = totalCost - budget;
        return "Not enough money! You need " + to_string(moneyNeeded) + " leva.";
    }
}

int main() {
    float budget;
    string category;
    int numPeople;

    cout << "Enter the budget: ";
    cin >> budget;

    cout << "Enter the category (VIP/Normal): ";
    cin >> category;

    cout << "Enter the number of people in the group: ";
    cin >> numPeople;

    string result = calculateCost(budget, category, numPeople);


    cout << fixed << result << endl;

    return 0;
}