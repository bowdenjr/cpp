#include "header.h"
using namespace std;

int main()
{
    cout << "Importing CSV..." << endl;
    vector<int> * pointerToVector = createArrayFromCSV();
    cout << "Sorting with QuickSort..." << endl;
    vector<int> * pointerToSortedVector = quickSort(pointerToVector);

    cout << "Printing to CSV..."<< endl;
    printArrayToCSV(pointerToSortedVector);

    delete pointerToVector;
    delete pointerToSortedVector;

    system("pause");

    return 0;

}
