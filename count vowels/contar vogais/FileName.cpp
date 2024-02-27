#include <iostream>
#include <string>
using namespace std;
int main()
{
	string txt;
	int ca = 0, ce = 0, ci = 0, co = 0, cu = 0, n, i;

	cout << "Write a phrase: \n";
	
	cin.ignore();
	getline(cin, txt);
	
	cout << "What would you like to do from the following options? \n" << "0 - Leave. \n" << "1 - Count how many vowels there are. \n";
	cin >> n;

	switch (n)
	{
	case 0: cout << "Bye bye!";
		break;
	case 1: cout << "Counting the vowels... \n";
		break;
	}
	if (n != 0)
	{
		for (i = 0; i < txt.size(); i++)
		{
			switch (txt[i])
			{
			case 'A':
			case 'a':
			{
				ca = ca + 1;
				break;
			}
			case 'E':
			case 'e':
			{
				ce = ce + 1;
				break;
			}
			case 'I':
			case 'i':
			{
				ci = ci + 1;
				break;
			}
			case 'O':
			case 'o':
			{
				co = co + 1;
				break;
			}
			case 'U':
			case 'u':
			{
				cu = cu + 1;
				break;
			}
			}
		}
		cout << "There are " << ca << " a's, " << ce << " e's, " << ci << " i's, " << co << " o's and " << cu << " u's.";
	}
	return 0;
}