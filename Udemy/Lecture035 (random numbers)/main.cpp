#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

void lottery(int,int);

int main()
{
//		srand(time(0));
//	for(int i =0; i<10;i++)
//	{
//		int nr = rand();
//
//		cout << nr << endl;
//	}

	lottery(49,6);
	cout << endl;
	return 0;
}

void lottery(int total_balls, int balls_to_draw)
{
	if(total_balls < balls_to_draw)
		return;

	srand(time(0));

	int *balls = new int[balls_to_draw];

	for(int i = 0; i < balls_to_draw; i++)
	{
		balls[i] = (rand() % 49) + 1; // Generate numbers from 1 to 49
		for(int j = 0; j < (i + 1); j++) // Need the + 1 because for loops checks the exit criterion at the beginning.
		{
			if(balls[i] == balls[j] && i != j)
			{
				i--; //reverse back and draw again
				break; //exit the for j loop
			}
			else if (j == i)
				cout << balls[i] << endl;

		}
	}

	delete[] balls;

}
