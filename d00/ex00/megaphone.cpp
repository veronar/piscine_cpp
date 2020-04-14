// This is a comment
#include <iostream>
#include <cstring>
using namespace std;

int main(int ac, char **av)
{
	if (ac == 1)
	{
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (0);
	}

	for (int i = 1; i < ac; i++)
	{
		std::string arg = av[i];
		for (unsigned int j = 0; j < arg.length(); j++)
		{
			arg[j] = toupper(arg[j]);
		}
		cout << arg;
	}
	cout << "\n";
	return (0);
}
