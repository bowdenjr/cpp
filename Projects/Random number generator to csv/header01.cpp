#include "header01.h"

using namespace std;

int getValidInput()
{

    int input;
    do{
        if(!cin){
            cout << "Invalid input, please retry" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    } while(!(cin >> input));

    return input;
}

void generateRandomsToCSV(int n, int maxVal)
{
    cout << '\n';
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(1,maxVal);
    ofstream outputCSV;
    outputCSV.open("random_numbers.csv");
    for(int i = 0; i < n; i++){
        outputCSV << dis(gen) << "," << endl;
    }
    outputCSV.close();
}
