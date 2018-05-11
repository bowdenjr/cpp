#include "header01.h"
#include <iostream>

using namespace std;

vector<int> * createArray()
{
	srand(time(0));
	int sizeOfVector;

    cout << "How large do you want your sorting vector to be?" << endl;
    cin >> sizeOfVector; //  TO DO - INSERT CHECK THAT THE USER DOESN'T ENTER AN ARRAY LARGE THAN THE CAPACITY OF RAND_MAX

	try
	{
		vector<int> * pointerToVector = new vector<int>(sizeOfVector);

		//FILL VECTOR WITH RANDOM NUMBERS
		for(int i=0; i<sizeOfVector; i++)
		{
			pointerToVector->at(i) = rand();

			for(int j = 0; j < (i + 1); j++) //Check for no duplication
			{
				if(pointerToVector->at(i) == pointerToVector->at(j) && i != j)
				{
					i--; //reverse back and draw again
					break; //exit the for j loop with updated i
				}
			}
		}
		return pointerToVector;
	}
	catch(...)
	{
		cout << "Insufficient memory" << endl;
		return 0;
	}

}

void printArray(vector<int> * pointerToVector)
{
	for(int i = 0; i < pointerToVector->size(); i++) //Print the array
	{
		cout << "vec[" << i << "] = " << pointerToVector->at(i) << endl;
	}

	return;

}

vector<int>* bubbleSort(vector<int> * pointerToUnsortedVector)
{


	try
	{
		vector<int> * pointerToSortedVector = new vector<int>(pointerToUnsortedVector->size());
		bool swapped = false;

		for(int i = 0; i < pointerToUnsortedVector->size();i++)
		{
			pointerToSortedVector->at(i) = pointerToUnsortedVector->at(i);
		}

		do
		{
			swapped = false;

			for(int i = 0; i < pointerToSortedVector->size()-1; i++)
			{
				if(pointerToSortedVector->at(i) > pointerToSortedVector->at(i+1))
				{
					swap(pointerToSortedVector->at(i),pointerToSortedVector->at(i+1));
					swapped = true;
				}
			}
		} while (swapped == true);

		return pointerToSortedVector;
	}
	catch(...)
	{
		cout << "Unspecified error in Bubble Sort" << endl;
		return 0;
	}
}
