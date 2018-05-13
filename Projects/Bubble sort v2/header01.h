#ifndef HEADER01_H_INCLUDED
#define HEADER01_H_INCLUDED

#include <iostream>
#include <random>
#include <time.h>
#include <vector>
#include <limits>
#include <iterator>
#include <fstream>
#include <sstream>
#include <string>
#include <algorithm>

using namespace std;

vector<int>* createArrayFromCSV();
vector<int>* bubbleSort(vector<int>*);
void printArrayToCSV(vector<int>*);
bool isValid();


//class CSVRow //each row is an object
//{
//    public:
//        string const& operator[](size_t index) const {return m_data[index];} //the [] operator to return an element
//        size_t size() const {return m_data.size();} // the size function to return the size of the row
//        void readNextRow(istream& str); //the function to read the next row
//    private:
//        vector<string> m_data; //the data
//};

#endif // HEADER01_H_INCLUDED
