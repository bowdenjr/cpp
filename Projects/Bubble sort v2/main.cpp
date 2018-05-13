#include "header01.h"
using namespace std;

int main()
{
    cout << "Importing CSV..." << endl;
    vector<int> * pointerToVector = createArrayFromCSV();
    cout << "Sorting..." << endl;
    vector<int> * pointerToSortedVector = bubbleSort(pointerToVector);

    cout << "Printing to CSV..."<< endl;
    printArrayToCSV(pointerToSortedVector);

    delete pointerToVector;
    delete pointerToSortedVector;

    system("pause");

    return 0;

}
