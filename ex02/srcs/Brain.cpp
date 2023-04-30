#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain's default constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = "nothing";
}

Brain::~Brain()
{
	std::cout << "Brain's destructor called" << std::endl;
}

Brain::Brain(const Brain &brain)
{
	std::cout << "Brain's copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = brain.getIdea(i);
}

std::string Brain::getIdea(unsigned int i) const
{
	return (this->_ideas[i]);
}

void	Brain::copyIdeas(const Brain &brain)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = brain.getIdea(i);
}

void	Brain::setIdeas(const std::string &idea, unsigned int start, unsigned int end)
{
	if (start < 0 || end > 100)
	{
		std::cout << "Invalid index" << std::endl;
		return ;
	}
	for (unsigned int i = start; i < end; i++)
		this->_ideas[i] = idea;
}

Brain &Brain::operator=(const Brain &brain)
{
	if (this != &brain)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = brain.getIdea(i);
	}
	return (*this);
}