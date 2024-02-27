#include <iostream>
using namespace std;
void main()
{
	srand(time(0));
	int n, rn = rand();
	do
	{
		cout << "Guess the correct number: ";
		cin >> n;
		if (n > rn)
		{
			cout << "That number is higher than the correct number. Try again. \n";
		}
		else if (n < rn)
		{
			cout << "That number is lower than the correct number. Try again. \n";
		}
		else if (n == rn)
		{
			cout << "Congratulations! You guessed the correct number. \n";
		}
	} while (n != rn);
}