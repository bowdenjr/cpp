#include <iostream>

using namespace std;
int * multiplyBy(int *, int); //Takes pointer and number, not two numbers
void multiplyArrayBy(int *,int,int);

int main()
{
    /*
    int a = 10;

    int *b = multiplyBy(&a,5);

    *b=999;

    cout << a << endl;
    cout << *b << endl;
    */

    int array[10];
//    cout << sizeof(array)/sizeof(array[0]) <<endl;

    for(int i = 0; i < sizeof(array)/sizeof(array[0]); i++)
    {
        array[i] = i;
//        cout << "Array [" << i << "] = " << array[i] << endl;
    }
    multiplyArrayBy(array,5,sizeof(array)/sizeof(array[0]));

    for(int i = 0; i < sizeof(array)/sizeof(array[0]); i++)
    {
        cout << "Array [" << i << "] = " << array[i] << endl;
    }


    return 0;
}

//Ret
int * multiplyBy(int * var, int amount)
{
    *var = *var * amount;

    return var;
}
void multiplyArrayBy(int *array, int amount, int sizeofArray)
{

    while(sizeofArray--)
    {
        array[sizeofArray] *= amount;
    }
}
//    for(int i = 0; i < sizeofArray; i++)
//    {
//        array[i] = array[i] * amount;
//    }
//}
//



//void multiplyBy(int *, int); //Takes a pointer and number, not two numbers
//int main()
//{
// THIS EXAMPLE USES A POINTER AS AN INPUT AND FEEDS ADDRESSES TO THE FUNCTION

//    int a = 10;
//
//    multiplyBy(&a,5);
//    cout << a << endl;
//
//
//
//
//
//    return 0;
//}
//
////Ret
//void multiplyBy(int * var, int amount)
//{
//
//    *var *= amount;
//
//
//}
