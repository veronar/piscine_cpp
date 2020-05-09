#include "Pony.hpp"
using namespace std;

void ponyOnTheHeap()
{
	Pony *harryTrotter = new Pony();

	harryTrotter->setName("Harry Trotter");
	harryTrotter->setColour("Black");
	harryTrotter->setAge("14");

	cout << "Name: " << harryTrotter->getName() << endl;
	cout << "Colour: " << harryTrotter->getColour() << endl;
	cout << "Age: " << harryTrotter->getAge() << endl;
}

void ponyOnTheStack()
{
	Pony padfoot;

	padfoot.setName("Padfoot");
	padfoot.setColour("Pink");
	padfoot.setAge("7");

	cout << "Name: " << padfoot.getName() << endl;
	cout << "Colour: " << padfoot.getColour() << endl;
	cout << "Age: " << padfoot.getAge() << endl;
}

int main()
{
	cout << "<=== Pony on the Heap ===>" << endl;
	ponyOnTheHeap();
	cout << endl
		 << "<=== Pony on the Stack ===>" << endl;
	ponyOnTheStack();
	return (0);
}
