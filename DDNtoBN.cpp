/*
Program Objective: To convert Dotted Decimal Notation IP to Binary Notation IP

INPUT: 
Enter the IP in Dotted Decimal Notation:
Enter first octet: 126
Enter second octet: 7
Enter third octet: 89
Enter fourth octet: 76

OUTPUT:
IP in Binary Notation: 10000001 00000111 01011001 01001100 

Name of the Author: Naitik Yadav
Date of Creation: 19/09/2021
Date of Last Modification: 20/09/2021 
*/

#include <iostream>
#include <stdlib.h>
using namespace std;

void decToBin(int binArr[][8], int row)
{
    int num = binArr[row][0];
    int idx = 7;
    while (idx >= 0)
    {
        binArr[row][idx] = num % 2;
        num = num / 2;
        idx--;
    }
}

int main()
{
    int bin[4][8];

    cout << "Enter the IP in Dotted Decimal Notation:\nEnter first octet: ";
    cin >> bin[0][0];
    cout << "Enter second octet: ";
    cin >> bin[1][0];
    cout << "Enter third octet: ";
    cin >> bin[2][0];
    cout << "Enter fourth octet: ";
    cin >> bin[3][0];

    for (int row = 0; row < 4; row++)
    {
        decToBin(bin, row);
    }

    cout << "IP in Binary Notation: ";
    for (int row = 0; row < 4; row++)
    {
        for (int column = 0; column < 8; column++)
            cout << bin[row][column];

        cout << " ";
    }
}