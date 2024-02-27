#include <iostream>
#include <string>
using namespace std;
void main()
{
	int c = 0, n = 1;
	char letter;
	string phrase;
	
	cout << "Write a phrase: ";
	cin >> phrase;

	for (int i = 0; i < phrase.size(); i++)
	{
		if (isupper(phrase[i]))
		{
			if (n == 0)
			{
				cout << " 1";
			}
			cout << "\n";
			n = 0;
		}
		if (isdigit(phrase[i]) && n == 0)
		{
			cout << " ";
			n = 1;
		}
		if (phrase[i] == '.')
		{
			if (n == 0)
			{
				cout << " 1";
			}
		}
		if (phrase[i] != '.')
		{
			cout << phrase[i];
		}
	}
}