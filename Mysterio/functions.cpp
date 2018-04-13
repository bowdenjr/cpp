#include "other.h"
int x;

using namespace std;

void initmenu()
{
    cout << "I am the great MYSTERIO++, think of a number between 1 and 100, and I will read your mind..." << endl;
    cout << "Please enter your number below... " << endl;
}

void choice()
{

    do { cin >> x; } while (!isValid(x, "Think you're clever? I said enter a number between 1 and 100..."));
    cout << "OK, reading your mind... please wait..."  << endl;
    sleep(5);
    cout << "Please wait ..." << endl;
    sleep(3);

//    if(x == 69)
//    {
//        cout << "Aaah, I see. You're dirty minded. Why don't spend some quality time online or something" << endl;
//        cout << "rather than thinking of dirty numbers!" << endl;
//
//    } else if(x == 42)
//    {
//        cout << "DON'T PANIC, it's " << x << endl;
//    }
//    else {

        cout << "Your number is " << (rand() % 100) + 1 << endl;
        sleep(2);
        cout << "WAIT, THAT'S WRONG ISN'T IT... hang on." << endl;
        sleep(2);
        cout << "<Traceback, line 51> cin >> x " << endl;
        sleep(2);
        cout << "<Recall variable> x"<< endl;
        sleep(2);
        cout << "Just pretend you didn't see that!" << endl;
        sleep(3);
        cout << "Behold! Your number is... " << endl;
        sleep(2);
        cout << x << endl;
//    }
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
