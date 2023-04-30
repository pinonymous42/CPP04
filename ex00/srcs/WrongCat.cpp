#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->_type = "WrongCat";
	std::cout << BLUE << "WrongCat's default constructor called" << DEFAULT << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << BLUE << "WrongCat's deconstructor called" << DEFAULT << std::endl;
}

WrongCat::WrongCat(const WrongCat &wrongcat)
{
	this->_type = wrongcat.getType();
}

WrongCat &WrongCat::operator=(const WrongCat &wrongcat)
{
	if (this != &wrongcat)
		this->_type = wrongcat._type;
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "Meow..." << std::endl;
}