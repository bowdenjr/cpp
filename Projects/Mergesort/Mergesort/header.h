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
vector<int>* mergeSort(vector<int>*);
void bottomUpMerge(vector<int>*,int,int,int,vector<int>*);
void copyVector(vector<int>*,vector<int>*,int);
void printArrayToCSV(vector<int>*);
bool isValid();


#endif // HEADER01_H_INCLUDED
