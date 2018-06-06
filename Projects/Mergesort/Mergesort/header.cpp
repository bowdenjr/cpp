#include "header.h"

using namespace std;

vector<int>* createArrayFromCSV(){
    string value;
    ifstream file("random_numbers.csv");


    if(!file.is_open()) {
      cout << "ERROR: File Open" << '\n';
    }

    vector<int> * pToVector = new vector<int>;

    while(file.good()){
        getline(file,value,',');
        if(!file.eof()){//don't do this on the eof character
            pToVector->push_back (stoi(value));
        }
    }

    file.close();

    return pToVector;


}

void printArrayToCSV(vector<int> * pToVector){
    ofstream outputCSV;
    outputCSV.open("sorted_random_numbers.csv");

    for(unsigned int i = 0; i < pToVector->size(); i++)
    {
        outputCSV << pToVector->at(i) << endl;
    }

    outputCSV.close();
}

vector<int>* mergeSort(vector<int> * pToUnsortedVector)
{
    clock_t t = clock();

	try
	{
		vector<int> * pToSortedVector = new vector<int>(pToUnsortedVector->size());
		vector<int> * pToWorkingVector = new vector<int>(pToUnsortedVector->size());

		for(unsigned int i = 0; i < pToUnsortedVector->size();i++)
		{
			pToSortedVector->at(i) = pToUnsortedVector->at(i);
		}

        int const & n = pToSortedVector->size();

        for (int width = 1; width < n; width = (2*width))
        {
            for (int i = 0; i < n; i = i + (2*width))
            {
                // Merge two runs: A->at(i:i+width-1) and A->at(i+width:i+2*width-1) to B->at()
                // or copy A->at(i:n-1) to B->at() ( if(i+width >= n) )
                bottomUpMerge(pToSortedVector, i, min(i+width, n), min(i+2*width, n), pToWorkingVector);
            }
            // Now work array B is full of runs of length 2*width.
            // Copy array B to array A for next iteration.
            // A more efficient implementation would swap the roles of A and B.
            copyVector(pToWorkingVector, pToSortedVector, n);
            // Now array A is full of runs of length 2*width.
        }

        cout << "The process took " << (clock()-t)/(double)CLOCKS_PER_SEC << " seconds " << endl;

		return pToSortedVector;
	}
	catch(...)
	{
		cout << "Unspecified error in Sort" << endl;
		return 0;
	}

}


void bottomUpMerge(vector<int>* pToSortedVector, int iLeft, int iRight, int iEnd, vector<int>* pToWorkingVector){

    int i = iLeft;
    int j = iRight;
    // While there are elements in the left or right runs...
    for (int k = iLeft; k < iEnd; k++) {
        // If left run head exists and is <= existing right run head.
        if (i < iRight && (j >= iEnd || pToSortedVector->at(i) <= pToSortedVector->at(j))) {
            pToWorkingVector->at(k) = pToSortedVector->at(i);
            i++;
        } else {
            pToWorkingVector->at(k) = pToSortedVector->at(j);
            j++;
        }
    }
}

void copyVector(vector<int>* pToWorkingVector,vector<int>* pToSortedVector,int n){

    for(int i = 0; i < n; i++){
//            pToSortedVector->at(i) = pToWorkingVector->at(i);
            pToSortedVector->at(i) = pToWorkingVector->at(i);

    }
}



bool isValid(){
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
