#include <limits>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <dos.h>
#include <windows.h>

using namespace std;

int x;
bool isValid(int, string);
void initmenu();
void choice();

int main()
{
    char cont;
    do
    {

        system("cls");
        initmenu();
        choice();

        do
        {
            cout << "Do you want to re-run MYSTERIO? (Y/N)" << endl;
            cin >> cont;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } while (cont != 'Y' && cont != 'y' && cont != 'N' && cont != 'n');

    } while (cont == 'y' || cont == 'Y');

	cout << endl;
	return 0;
}

void initmenu()
{
    cout << "HI, my name is MYSTERIO, think of a number between 1 and 100, and I will guess it for you..." << endl;
    cout << "Enter your number below... " << endl;
}

void choice()
{

    do { cin >> x; } while (!isValid(x, "Think you're clever? I said enter a number between 1 and 100..."));
    cout << "OK, reading your mind..."  << endl;
    sleep(2);
    cout << "..." << endl;
    sleep(3);
    cout << "Visualize your number, give it to me with your mind..." << endl;
    sleep(2);
    cout << "..."  << endl;
    sleep(3);
    if(x == 69)
    {
        cout << "Aaah, I see. You're dirty minded. Why don't spend some quality time online or something" << endl;
        cout << "rather than thinking of dirty numbers!" << endl;
    } else if(x == 42)
    {
        cout << "DON'T PANIC, it's " << x << endl;
    }
    else {

        cout << "Your number is " << x+1 << endl;
        sleep(2);
        cout << "WAIT, no it's " << x << endl;
    }
}



bool isValid(int x_, string error_msg)
{
	if (x_ < 1 || x_ > 100 || cin.rdstate()) // state is wrong when not equal to zero
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		system("cls");
		initmenu();
		cout << error_msg << endl;
		return false; // return leaves the function.
	}
	return true;
}
