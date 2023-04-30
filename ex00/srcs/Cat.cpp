#include "Cat.hpp"

Cat::Cat()
{
	this->_type = "Cat";
	std::cout << BLUE << "Cat's default constructor called" << DEFAULT << std::endl;
}

Cat::~Cat()
{
	std::cout << BLUE << "Cat's deconstructor called" << DEFAULT << std::endl;
}

Cat::Cat(const Cat &cat)
{
	std::cout << BLUE << "Cat's copy constructor called" << DEFAULT << std::endl;
	this->_type = cat.getType();
}

Cat &Cat::operator=(const Cat &cat)
{
	if (this != &cat)
		this->_type = cat._type;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Meow..." << std::endl;
}