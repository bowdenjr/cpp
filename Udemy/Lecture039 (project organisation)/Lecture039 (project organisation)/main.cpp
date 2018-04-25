#include <iostream>
#include <string.h>

using namespace std;
void showHelp();

// RUN THIS CODE FROM THE CMD CONSOLE AND PASS PARAMETERS TO PLAY WITH argc AND argv

int main(int argc, char *argv[]) //argc = argument counter
{
    //argc = argument counter
    //argv = arguments values

    for(int i = 0; i < argc; i++)
    {
        if(!strcmp(argv[i], "-h") && i == 1) //only show help when it's the first parameter
        {
            showHelp();
        }

    }

/*
    char a[] = {'a', 'b', 'c', 'd', '\0'};
    char *b = "this is a test"; //assigns the address of the first character to the pointer.

    char *c[] = {"lala", "test", "something else"};
    cout << *c << endl;


    char x[] = "xxxb";
    char y[] = "xxxa";

    cout << (x == y) << endl; // == operator doesn't work like this on arrays.
    // NAME OF ARRAY IS A POINTER, ie x and y (as written) are POINTERS.
    cout << (&x[0] == &y[0]) << endl;

    string a1 = "lalala";
    string a2 = "lalala";

    cout << (a1 == a2) << endl; // THIS IS OK, because strings are classes.

    cout << (strcmp(x,y)) << endl; // Returns zero when equal. Returns <0 when first has a lower value than second.
*/
    return 0;
}

void showHelp()
{
    cout << "I am helpful" << endl;
}
