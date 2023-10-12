#include <iostream>
#include <string>
using namespace std;

string checkTitle(int age, char gender) 
{
    if (gender == 'm') 
    {
        if (age >= 16) {
            return "Mr.";
        } else {
            return "Master";
        }
    } else if (gender == 'f') {
        if (age >= 16) {
            return "Ms.";
        } else {
            return "Miss";
        }
    } else {
        
        return "Unknown";
    }
}

int main() {
    int age;
    char gender;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your gender (m/f): ";
    cin >> gender;

    string title = checkTitle(age, gender);

    if (title == "Unknown") {
        cout << "Invalid gender input." << endl;
    } else {
        cout << "Your personal title is: " << title << endl;
    }

    return 0;
}





