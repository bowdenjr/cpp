#include "header.h"

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

vector<int>* quickSort(vector<int> * pointerToUnsortedVector)
{
    clock_t t = clock();

	try
	{
		vector<int> * pointerToSortedVector = new vector<int>(pointerToUnsortedVector->size());

		for(unsigned int i = 0; i < pointerToUnsortedVector->size();i++)
		{
			pointerToSortedVector->at(i) = pointerToUnsortedVector->at(i);
		}

        qs(pointerToSortedVector,0,(pointerToSortedVector->size()-1));

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

vector<int>* qs(vector<int>* pointerToSortedVector, int lo, int hi){

    int p;

    if (lo < hi){
        p = part(pointerToSortedVector, lo, hi);
        qs(pointerToSortedVector, lo, p-1);
        qs(pointerToSortedVector, p+1, hi);
    }

    return pointerToSortedVector;
}


int part(vector<int> * pointerToSortedVector, int lo, int hi)
{
    int pivot = pointerToSortedVector->at(hi);
    int i = lo;
//    cout << "Partition: lo = " << lo << ", hi = " << hi << ", pivot = " << pivot << endl;

    for (int j = lo; j < hi; j++){

        if(pointerToSortedVector->at(j) < pivot){
//            cout << "swapping element " << i << ": " << pointerToSortedVector->at(i) << ", with j element " << j << ": " << pointerToSortedVector ->at(j) << endl;
            swap(pointerToSortedVector->at(i),pointerToSortedVector->at(j));
            i++;
        }
    }
//    cout << "swapping element " << i << ": " << pointerToSortedVector->at(i) << ", with hi element " << hi << ": " << pointerToSortedVector ->at(hi) << endl;
    swap(pointerToSortedVector->at(i), pointerToSortedVector->at(hi));

    return i;
}

