/*
Program Objective: To convert Binary Notation IP to Dotted Decimal Notation IP

INPUT: 
Enter the IP in Binary Notation:
Enter first octet: 10000001
Enter second octet: 00000111
Enter third octet: 01011001
Enter fourth octet: 01001100

OUTPUT:
The given IP in Dotted Decimal Notation is 126.7.89.76.

Name of the Author: Naitik Yadav
Date of Creation: 24/09/2021
Date of Last Modification: 24/09/2021 
*/

#include <bits/stdc++.h>
using namespace std;

int binToDec(string bin)
{
    int dec = 0;
    for (int i = 7; i >= 0; i--)
    {
        if (bin[i] == '1')
        {
            dec += pow(2, 7-i);
        }
    }
    return dec;
}

int main()
{
    string bin[4];

    cout << "Enter the IP in Binary Notation:\nEnter first octet: ";
    cin >> bin[0];
    cout << "Enter second octet: ";
    cin >> bin[1];
    cout << "Enter third octet: ";
    cin >> bin[2];
    cout << "Enter fourth octet: ";
    cin >> bin[3];

    cout << "The given IP in Dotted Decimal Notation is ";
    for (int row = 0; row < 4; row++)
    {
        cout << binToDec(bin[row]) << ".";
    }
}