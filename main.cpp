#include <iostream>
#include <cmath>
#include <ios>
#include <iomanip>
//Class : CSI 140-01
// Assignment : PA x or Lab x
// Date Assigned : 9/19/2022
// Due Date : Due - 10/2/2022 11:59 pm
// Description :
//A program that calculates long distance call prices to mexico
// Certification of Authenticity :
//I certify that this is entirely my own work, except where I have given fully documented
// references to the work of others.I understand the definition and
// consequences of plagiarism and acknowledge that the assessor of this assignment
// may, for the purpose of assessing this assignment :
// -Reproduce this assignment and provide a copy to another member of
// academic staff; and / or
// - Communicate a copy of this assignment to a plagiarism checking service
// (which may then retain a copy of this assignment on its database for
// the purpose of future plagiarism checking)
using namespace std;
int main() {
    //setting up variables for input
    double startCall;
    double timeCall;
    double fractional;
    //variable for the validation loop
    bool looper = true;
    //input validation loop
    while (looper == true) {
        //asking for inputs
        cout << "\nPlease enter the when you started the call in HH.MM format";
        cin >> startCall;
		cin.clear();
		cin.ignore();
        fractional = startCall - static_cast<int>(startCall);
        //checking if the inputs are valid
        if (startCall <= 24.00 && startCall >= 00.00 && fractional <= 0.59) {
            cout << "\nPlease enter the total time of the call in minutes";
            cin >> timeCall;
            //since the inputs are valid we do the calculations
            if (startCall >= 0 && startCall <= 06.59) {
                cout << fixed << setprecision(2)<< "\nThe cost of your call was $" << 0.12 * timeCall;
                looper = false;
            } else if (startCall >= 7.00 && startCall <= 19.00) {
                cout << "\nPlease enter the total time of the call in minutes";
                cin >> timeCall;
                cout << fixed << setprecision(2) << "\nThe cost of your call was $" << 0.55 * timeCall;
                looper = false;
            } else if (startCall >= 19.01 && startCall <= 23.59) {
                cout << "\nPlease enter the total time of the call in minutes";
                cin >> timeCall;
                cout << fixed << setprecision(2) << "\nThe cost of your call was $" << 0.35 * timeCall;
                looper = false;
            }
        }
        //here since the input is not valid we tell the user what to do again and loop back to the start so they can try again
        else {
            cout << "\nSorry you did not enter a valid start time. Please put the start time in millitary time in the format HH.MM. Please press enter to continue.";
        }
    }
    return 0;
}