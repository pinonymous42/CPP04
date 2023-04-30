#include "Animal.hpp"

Animal::Animal():_type("")
{
	std::cout << RED << "Animal's default constructor called" << DEFAULT << std::endl;
}

Animal::~Animal()
{
	std::cout << RED << "Animal's deconstructor called" << DEFAULT << std::endl;
}

Animal::Animal(const Animal &animal)
{
	this->_type = animal.getType();
}

std::string Animal::getType() const
{
	return (this->_type);
}

Animal &Animal::operator=(const Animal &animal)
{
	if (this != &animal)
		this->_type = animal._type;
	return (*this);
}
