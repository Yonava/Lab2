#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void coinCalcA() {
    
    cout << "You Selected A!" << endl;

    int quarter, dime, nickle;
    cout << "How Many Quarters: ";
    cin >> quarter;
    cout << "How Many Dimes: ";
    cin >> dime;
    cout << "How Many Nickles: ";
    cin >> nickle;

    int total_cents = quarter * 25 + dime * 10 + nickle * 5;

    cout << endl << "       You Have A Total of " << total_cents << " Cents" << endl;
}

void coinCalcB() {

    cout << "You Selected B!" << endl;

    int input, halfDollars, quarters, dimes, nickles, pennies;
    cout << "How Much Ca$h you got (in cents, (and i aint talking pokemon go :D)): ";
    cin >> input;
    if (input >= 50) {
        halfDollars = input / 50;
        input = input % 50;
        cout << "Half Dollars: " << halfDollars << endl;
    }
    if (input >= 25) {
        quarters = input / 25;
        input = input % 25;
        cout << "Quarters: " << quarters << endl;
    }
    if (input >= 10) {
        dimes = input / 10;
        input = input % 10;
        cout << "Dimes: " << dimes << endl;
    }
    if (input >= 5) {
        nickles = input / 5;
        input = input % 5;
        cout << "Nickles: " << nickles << endl;
    }
    if (input >= 1) {
        pennies = input / 1;
        input = input % 1;
        cout << "Pennies: " << pennies << endl;
    }

}

int main() {
    string selector;
    bool run = true;
    while (run) {
        cout << "Type 'a' for Part A and 'b' for Part B ('exit' to quit): ";
        cin >> selector;
        if (selector == "a") {
            coinCalcA();
        }
        if (selector == "b") {
            coinCalcB();
        }
        if (selector == "exit") {
            run = false;
        }
        else if (selector != "a" and selector != "b" and selector != "exit") {
            cout << "Invalid input... Try inputting 'a' or 'b'";
        }
    }
    cout << "Program Is Done For Now :(";
}


