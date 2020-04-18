#include <iostream>
#include <cstring>
using namespace std;

int main(void)
{
	string command;
	cout << "What do you want? ";
	cin >> command;
	if (command.compare("EXIT") == 0)
	{
		cout << "Have a great fucking day\n";
		return (0);
	}
	else if (command.compare("ADD") == 0)
	{
		cout << "You want to add a contact\n";
		return (0);
	}
	else if (command.compare("SEARCH") == 0)
	{
		cout << "Search from the below\n";
		return (0);
	}
	else
	{
		cout << "You idiot, what kind of command is that??\nK Bye\n";
		return (0);
	}
}
