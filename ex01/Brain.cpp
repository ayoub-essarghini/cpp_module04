#include "./includes/Brain.hpp"

using std::cout;
using std::endl;

Brain::Brain()
{
	cout << "Brain Constructor Called" << endl;
}
Brain &Brain::operator=(const Brain &other)
{
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
			ideas[i] = other.ideas[i];
	}
	return *this;
}

Brain::Brain(const Brain &other)
{
	cout << "Brain Copy Constructor Called" << endl;
	*this = other;
}


Brain::~Brain()
{
	cout << "Brain Destructor Called" << endl;
}

