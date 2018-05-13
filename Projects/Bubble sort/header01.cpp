#include "header01.h"
#include <iostream>

using namespace std;

vector<long> * createArray()
{
	long sizeOfVector;

    cout << "How large do you want your sorting vector to be?" << endl;
    do{cin >> sizeOfVector;} while (!isValid());

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(1, pow(sizeOfVector,10));

	try
	{
		vector<long> * pointerToVector = new vector<long>(sizeOfVector);

		//FILL VECTOR WITH RANDOM NUMBERS
		for(long i=0; i<sizeOfVector; i++)
		{
			pointerToVector->at(i) = dis(gen);

			for(long j = 0; j < (i + 1); j++) //Check for no duplication
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

void printArray(vector<long> * pointerToVector)
{
	for(long i = 0; i < pointerToVector->size(); i++) //Print the array
	{
		cout << "vec[" << i << "] = " << pointerToVector->at(i) << endl;
	}

	return;

}

vector<long>* bubbleSort(vector<long> * pointerToUnsortedVector)
{
	try
	{
		vector<long> * pointerToSortedVector = new vector<long>(pointerToUnsortedVector->size());
		bool swapped = false;

		for(long i = 0; i < pointerToUnsortedVector->size();i++)
		{
			pointerToSortedVector->at(i) = pointerToUnsortedVector->at(i);
		}

		do
		{
			swapped = false;

			for(long i = 0; i < pointerToSortedVector->size()-1; i++)
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
bool isValid()
{
	if (cin.rdstate()) // state is wrong when not equal to zero
	{
	    cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		system("cls");
		exit(1);
		return false; // return leaves the function.
	}
	return true;
}
