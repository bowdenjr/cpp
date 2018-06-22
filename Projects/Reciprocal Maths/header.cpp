#include "header.h"

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

double getRecipSum(int n){

    double result=0;
    int r=1;

    do{
        result += 1/(double)r++;
    }while(r<=n);

    return result;

}
double getRecipProd(int n){

    double result=1;
    int r=1;

    do{
        result *= 1/(double)r++;
    }while(r<=n);

    return result;
}
double getRecipAvg(int n){

    double sum=0;
    int r=1;

    do{
        sum += 1/(double)r++;
    }while(r<=n);

    return sum/--r;
}
