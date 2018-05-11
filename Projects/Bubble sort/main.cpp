#include "header01.h"
using namespace std;

int main()
{
    vector<int> * pointerToVector = createArray();

    cout << "BEFORE SORTING: " << endl;
    printArray(pointerToVector);

    vector<int> * pointerToSortedVector = bubbleSort(pointerToVector);

    cout << "AFTER SORTING: " << endl;
    printArray(pointerToSortedVector);

    delete pointerToVector;

    return 0;
}
