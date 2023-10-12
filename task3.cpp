#include <iostream>
#include <iomanip> 
using namespace std;


double perimeter(char shape, double num) {
    if (shape == 's') {
        return 4 * num; 
    } else if (shape == 'c') {
        return 6.28 * num; 
    } else if (shape == 't') {
        return 3 * num; 
    } else if (shape == 'h') {
        return 6 * num; 
    } else {
        return 0; 
    }
}

int main() {
    char shape;
    double value;

    cout << "Enter the shape (s for square, c for circle, t for triangle, h for hexagon): ";
   cin >> shape;

 cout << "Enter the value: ";
   cin >> value;

    double result = perimeter(shape, value);

    if (result == 0) {
      cout << "Invalid input. Please enter a valid shape character." <<endl;
    } else {
        cout << "The perimeter is: "  << result << endl;
    }

    return 0;
}