/*
Program Objective: To display the class of the IP Address entered by the user.

INPUT: 
Enter the IP Address in Dotted Decimal Notation:
Enter the first octet: 193
Enter the second octet: 90
Enter the third octet: 74
Enter the fourth octet: 125

OUTPUT: 
It is Class C address.

Name of the Author: Naitik Yadav
Date of Creation: 21/09/2021
Date of Last Modification: 22/09/2021 
*/

#include <iostream>
using namespace std;

int main()
{
    int octet[4];

    cout << "Enter the IP in Dotted Decimal Notation:\nEnter first octet: ";
    cin >> octet[0];
    cout << "Enter second octet: ";
    cin >> octet[1];
    cout << "Enter third octet: ";
    cin >> octet[2];
    cout << "Enter fourth octet: ";
    cin >> octet[3];

    if (octet[0] >= 0 && octet[0] <= 127)
        cout << "It is Class A address.";
    else if (octet[0] >= 128 && octet[0] <= 191)
        cout << "It is Class B address.";
    else if (octet[0] >= 192 && octet[0] <= 223)
        cout << "It is Class C address.";
    else if (octet[0] >= 224 && octet[0] <= 239)
        cout << "It is Class D address.";
    else if (octet[0] >= 240 && octet[0] <= 255)
        cout << "It is Class E address.";
    else
        cout << "It does not belong to any of the classes.";

    return 0;
}