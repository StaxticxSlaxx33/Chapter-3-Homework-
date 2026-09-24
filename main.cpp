#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
string month;
int year;

float electricity, water, gas, misc;
float total = 0.0f;

// User Input
cout << "Enter the month: ";
getline(cin, month);

cout << "Enter the year: ";
cin >> year;

cout << "\nEnter utility costs for " << month << " " << year << endl;
cout << "(Enter 0 if there is no amount for a utility)\n" << endl;

cout << "Electricity: $";
cin >> electricity;

cout << "Water: $";
cin >> water;

cout << "Gas: $";
cin >> gas;

cout << "Additional/Miscellaneous: $";
cin >> misc;

// Calculate Total using combined assignment operator
total += electricity;
total += water;
total += gas;
total += misc;

// Formatted Report
cout << "\n\n";
cout << month << " " << year << " Utilities" << endl;
cout << fixed << setprecision(2);

cout << left
<< setw(15) << "Electricity"
<< setw(15) << "Water"
<< setw(15) << "Gas"
<< setw(20) << "Addtl/Misc"
<< setw(15) << "Total" << endl;

cout << right
<< "$" << setw(10) << electricity
<< "$" << setw(14) << water
<< "$" << setw(14) << gas
<< "$" << setw(19) << misc
<< "$" << setw(14) << total << endl;

return 0;
}