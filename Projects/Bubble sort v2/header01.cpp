#include "header01.h"

using namespace std;

vector<int>* createArrayFromCSV()
{
    string value;
    ifstream file("random_numbers.csv");


    if(!file.is_open()) {
      cout << "ERROR: File Open" << '\n';
    }

    vector<int> * pointerToVector = new vector<int>;

    while(file.good()){
        getline(file,value,',');
        if(!file.eof()){//don't do this on the eof character
            pointerToVector->push_back (stoi(value));
        }
    }

    file.close();

    return pointerToVector;


}

void printArrayToCSV(vector<int> * pointerToVector)
{
    ofstream outputCSV;
    outputCSV.open("sorted_random_numbers.csv");

    for(unsigned int i = 0; i < pointerToVector->size(); i++)
    {
        outputCSV << pointerToVector->at(i) << endl;
    }

    outputCSV.close();
}

vector<int>* bubbleSort(vector<int> * pointerToUnsortedVector)
{
    clock_t t = clock();

	try
	{
		vector<int> * pointerToSortedVector = new vector<int>(pointerToUnsortedVector->size());
		bool swapped = false;

		for(unsigned int i = 0; i < pointerToUnsortedVector->size();i++)
		{
			pointerToSortedVector->at(i) = pointerToUnsortedVector->at(i);
		}

		do
		{
			swapped = false;

			for(unsigned int i = 0; i < pointerToSortedVector->size()-1; i++)
			{
				if(pointerToSortedVector->at(i) > pointerToSortedVector->at(i+1))
				{
					swap(pointerToSortedVector->at(i),pointerToSortedVector->at(i+1));
					swapped = true;
				}
			}
		} while (swapped == true);

        cout << "The process took " << (clock()-t)/(double)CLOCKS_PER_SEC << " seconds " << endl;

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


