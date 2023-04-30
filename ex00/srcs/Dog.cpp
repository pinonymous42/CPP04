#include "Dog.hpp"

Dog::Dog()
{
	this->_type = "Dog";
	std::cout << GREEN << "Dog's default constructor called" << DEFAULT << std::endl;
}

Dog::~Dog()
{
	std::cout << GREEN << "Dog's deconstructor called" << DEFAULT << std::endl;
}

Dog::Dog(const Dog &dog)
{
	std::cout << GREEN << "Dog's copy constructor called" << DEFAULT << std::endl;
	this->_type = dog.getType();
}

Dog &Dog::operator=(const Dog &Dog)
{
	if (this != &Dog)
		this->_type = Dog._type;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Bowwow..." << std::endl;
}