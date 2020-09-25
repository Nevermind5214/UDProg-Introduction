#include "../../std_lib_facilities.h"

int main()
{
    double sum=0, penny = 0, nickel = 0, dime = 0, quarter = 0, half = 0, dollar = 0;

    cout << "How many pennies do you have?\n";
    cin >> penny;
    sum = sum + penny;

    cout << "How many nickels do you have?\n";
    cin >> nickel;
    sum = sum + nickel*5;

    cout << "How many dimes do you have?\n";
    cin >> dime;
    sum = sum + dime*10;

    cout << "How many quarters do you have?\n";
    cin >> quarter;
    sum = sum + quarter*25;

    cout << "How many half dollars do you have?\n";
    cin >> half;
    sum = sum + half*50;

    cout << "How many dollars do you have?\n";
    cin >> dollar;
    sum = sum + dollar*100;

    if (penny != 0){
        cout << "You have " << penny;
        if (penny == 1) cout << " penny.\n";
        else cout << " pennies.\n";
    }

    if (nickel != 0){
        cout << "You have " << nickel;
        if (nickel == 1) cout << " nickel.\n";
        else cout << " nickels.\n";
    }

    if (dime != 0){
        cout << "You have " << dime;
        if (dime == 1) cout << " dime.\n";
        else cout << " dimes.\n";
    }

    if (quarter != 0){
        cout << "You have " << quarter;
        if (quarter == 1) cout << " quarter.\n";
        else cout << " quarters.\n";
    }

    if (half != 0){
        cout << "You have " << half;
        if (half == 1) cout << " half dollar.\n";
        else cout << " half dollars.\n";
    }

    if (dollar != 0){
        cout << "You have " << dollar;
        if (dollar == 1) cout << " dollar.\n";
        else cout << " dollars.\n";
    }

    cout << "\nThe value of all your coins is $" << sum/100 << " ("
        << sum << " cents)\n";

    return 0;
}
