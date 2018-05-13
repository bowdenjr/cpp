#include <iostream>
#include "header01.h"

using namespace std;

int main()
{
    int n, maxVal;

    cout << "How many numbers do you want to generate:" << endl;
    n = getValidInput();

    cout << "Enter the maximum value:" << endl;
    while((maxVal = getValidInput())){
        if(maxVal < n)
        {
            cout << "Maximum value must be greater than amount of numbers to generate." << endl;
            cout << "Enter the maximum value:" << endl;
            continue;
        }
//        if()
//        {
//            // Can have other conditions from here onwards
//        }
        break;
    }

    generateRandomsToCSV(n, maxVal);


    return 0;
}
