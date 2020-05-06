#include "phonebook.hpp"
using namespace std;

int main(void)
{
	int index;
	Contact phonebook[MAX_CONTACTS];
	string command;

	index = 0;
	while (1)
	{
		cout << "What do you want? ";
		cin >> command;
		if (command.compare("EXIT") == 0)
		{
			cout << "K Bye\n";
			return (0);
		}
		else if (command.compare("ADD") == 0)
		{
			cout << "You want to add a contact\n";
			if (index < MAX_CONTACTS)
			{

				index++;
				phonebook[index] = addEntry();
			}
			else
			{
				cout << "Phonebook full. You cannot add anymore contacts";
			}
		}
		else if (command.compare("SEARCH") == 0)
		{
			cout << "Search from the below\n";
			search(phonebook, index);
		}
		else
		{
			cout << "What kind of command is that?\nTry Again\n";
		}
	}
}
