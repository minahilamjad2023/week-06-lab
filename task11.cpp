#include <iostream>
#include <string>
using namespace std;


string checkSpeed(float speed) 
{
    if (speed <= 10)
     {
        return "slow";
    }
     else if (speed <= 50) 
     {
        return "average";
    } else if (speed <= 150)
     {
        return "fast";
    }
     else if (speed <= 1000)
      {
        return "ultra-fast";
    } else  
    {
        return "extremely fast";
    }
}

int main() {
    float speed;

    cout << "Enter the speed: ";
    cin >> speed;

    string speedInfo = checkSpeed(speed);

    cout << speedInfo << endl;

    return 0;
}