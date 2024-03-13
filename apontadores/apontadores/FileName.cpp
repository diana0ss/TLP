#include <iostream>
#include <string>
using namespace std;
int main()
{
	string food = "Pizza";
	string* ap = &food;
	*ap = "Hamburger";

	cout << food;

	return 0;
}