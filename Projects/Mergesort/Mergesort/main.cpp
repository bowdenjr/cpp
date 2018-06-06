#include "header.h"
using namespace std;

int main()
{
    cout << "Importing CSV..." << endl;
    vector<int> * pToVector = createArrayFromCSV();
    cout << "Sorting with Mergesort..." << endl;
    vector<int> * pToSortedVector = mergeSort(pToVector);

    cout << "Printing to CSV..."<< endl;
    printArrayToCSV(pToSortedVector);

    delete pToVector;
    delete pToSortedVector;

    system("pause");

    return 0;

}
