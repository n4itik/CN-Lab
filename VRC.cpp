/* Program Objective: To generate VRC for a given character
Name of the Author: Naitik Yadav
Date of Creation: 23/08/2021
Date of Last Modification: 25/08/2021 */

#include <iostream>
using namespace std;

void decToBin(int n)
{

    int bin[32];

    int i = 0, count = 0, bit = 0;

    while (n > 0)
    {
        bin[i] = n % 2;
        n = n / 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--)
    {
        if (bin[j] == 1)
        {
            count++;
        }
    }
    cout << "Count = " << count << endl;
    if (count % 2 != 0)
    {
        bit = 1;
    }
    cout << "Bits = " << bit;
    for (int j = i - 1; j >= 0; j--)
    {

        cout << bin[j];
    }
}

int main()
{
    char ch;
    cout << "Enter any character: ";
    cin >> ch;
    int ascii = ch;
    cout << ascii << endl;
    decToBin(ascii);

    return 0;
}