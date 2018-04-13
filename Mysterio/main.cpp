#include "other.h"

using namespace std;

int main()
{
    char cont;
    srand(time(0));

    do
    {
        system("cls");
        initmenu();
        choice();

        do
        {
            sleep(1);
            cout << "Do you want to re-run MYSTERIO++? (Y/N)" << endl;
            cin >> cont;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } while (cont != 'Y' && cont != 'y' && cont != 'N' && cont != 'n');

    } while (cont == 'y' || cont == 'Y');

	cout << endl;
	return 0;
}
