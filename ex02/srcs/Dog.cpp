#include "Dog.hpp"

Dog::Dog()
{
	try
	{
		this->_dog_brain = new Brain;
	}
	catch(const std::bad_alloc &e)
	{
		std::cout << e.what() << std::endl;
		std::exit(1);
	}
	this->_type = "Dog";
	std::cout << GREEN << "Dog's default constructor called" << DEFAULT << std::endl;
}

Dog::~Dog()
{
	std::cout << GREEN << "Dog's deconstructor called" << DEFAULT << std::endl;
	delete this->_dog_brain;
}

Dog::Dog(const Dog &dog)
{
	try
	{
		this->_dog_brain = new Brain;
	}
	catch(const std::bad_alloc &e)
	{
		std::cout << e.what() << std::endl;
		std::exit(1);
	}
	this->_type = dog.getType();
	this->_dog_brain->copyIdeas(*(dog._dog_brain));
	std::cout << GREEN << "Dog's copy constructor called" << DEFAULT << std::endl;
}

Dog &Dog::operator=(const Dog &dog)
{
	if (this != &dog)
	{
		this->_type = dog._type;
		this->_dog_brain->copyIdeas(dog.getBrain());
	}
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << GREEN << "Bowwow..." << DEFAULT << std::endl;
}

Brain &Dog::getBrain() const
{
	return (*(this->_dog_brain));
}
