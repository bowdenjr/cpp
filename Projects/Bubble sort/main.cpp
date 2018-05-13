#include "header01.h"
using namespace std;

int main()
{

//    cout << numeric_limits<short>::max() << endl;
//    cout << numeric_limits<unsigned short>::max() << endl;
//    cout << numeric_limits<long>::max() << endl;
//    cout << numeric_limits<unsigned long>::max() << endl;
//    cout << numeric_limits<long long int>::max() << endl;
//    cout << numeric_limits<unsigned long long int>::max() << endl;


    vector<long> * pointerToVector = createArray();

//    cout << "BEFORE SORTING: " << endl;
//    printArray(pointerToVector);

    vector<long> * pointerToSortedVector = bubbleSort(pointerToVector);

    cout << "AFTER SORTING: " << endl;
    printArray(pointerToSortedVector);

    delete pointerToVector;

    return 0;

}
