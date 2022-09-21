#include <iostream>
#include <cmath>
using namespace std;
int main() {
    //setting up variables for input
    double startCall;
    double timeCall;
    double fractional;
    bool looper = true;
    //input validation loop
    while (looper == true) {
        //asking for inputs
        cout << "\nPlease enter the when you started the call in HH.MM format";
        cin >> startCall;
        fractional = startCall - static_cast<int>(startCall);
        if (startCall <= 24.00 && startCall >= 00.00 && fractional <= 0.6) {
            cout << "\nPlease enter the total time of the call in minutes";
            cin >> timeCall;
            if (startCall >= 0 && startCall <= 06.59) {
                cout << "\nThe cost of your call was $" << 0.12 * timeCall;
                looper = false;
            } else if (startCall >= 7.00 && startCall <= 19.00) {
                cout << "\nPlease enter the total time of the call in minutes";
                cin >> timeCall;
                cout << "\nThe cost of your call was $" << 0.55 * timeCall;
                looper = false;
            } else if (startCall >= 19.01 && startCall <= 23.59) {
                cout << "\nPlease enter the total time of the call in minutes";
                cin >> timeCall;
                cout << "\nThe cost of your call was $" << 0.35 * timeCall;
                looper = false;
            }
        }
        else {
            cout << "\nSorry you did not enter a valid start time. Please put the start time in millitary time in the format HH.MM. Please press enter to continue.";
        }
    }
    return 0;
}
//660
//690