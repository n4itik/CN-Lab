/*
Program Objective: To bit stuff the given binary data.

Algorithm for Bit−Stuffing 
1. Start 
2. Initialize the array for transmitted stream with the special bit pattern 0111 1110 which indicates the beginning of the frame. 
3. Get the bit stream to be transmitted in to the array. 
4. Check for five consecutive ones and if they occur, stuff a bit 0 
5. Display the data transmitted as it appears on the data line after appending 0111 1110 at the End. 
6. For de−stuffing, copy the transmitted data to another array after detecting the stuffed bits. 
7. Display the received bit stream. 
8. Stop

INPUT/OUTPUT: 
Enter the bit string (space for each byte): 11111111 01111110 00111110 
After stuffing: 01111110 111110111011111010001111100 01111110

Name of the Author: Naitik Yadav
Date of Creation: 17/09/2021
Date of Last Modification: 19/09/2021 
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string delimiter = "01111110";
    string input;

    cout << "Enter the bit string: ";
    getline(cin >> ws, input);

    int size = input.length();
    int count = 0;

    for (int i = 0; i < size; i++)
    {
        if (input[i] == '1')
            count++;
        if (input[i] == '0')
            count = 0;
        if (count == 5)
        {
            count = 0;
            input.insert(i+1, "0");
            size++;
        }
    }

    cout << "After stuffing: " << delimiter << " " << input << " " << delimiter;
}