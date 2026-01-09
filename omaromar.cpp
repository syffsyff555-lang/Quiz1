// omaree.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
Full Name: omar ali
Group:B1
*/

#include <iostream>
using namespace std;

int main() {
    int consumption;
    int pricePerUnit;
    int totalBill;

    cout << "Enter electricity consumption (in kilowatts): ";
    cin >> consumption;

    if (consumption <= 100) {
        pricePerUnit = 250;
    }
    else if (consumption <= 300) {
        pricePerUnit = 300;
    }
    else {
        pricePerUnit = 350;
    }

    totalBill = consumption * pricePerUnit;

    if (totalBill > 100000) {
        cout << endl << "High consumption – Please reduce usage" << endl;
    }
    else {
        cout << endl << "Normal consumption" << endl;
    }

    cout << endl;
    cout << "Electricity consumption: " << consumption << " units" << endl;
    cout << "Price per unit: " << pricePerUnit << " IQD" << endl;
    cout << "Total bill amount: " << totalBill << " IQD" << endl;

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
