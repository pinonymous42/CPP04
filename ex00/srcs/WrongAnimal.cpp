#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal():_type("")
{
	std::cout << RED << "WrongAnimal's default constructor called" << DEFAULT << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << RED << "WrongAnimal's deconstructor called" << DEFAULT << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &wronganimal)
{
	this->_type = wronganimal.getType();
}

std::string WrongAnimal::getType() const
{
	return (this->_type);
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &wronganimal)
{
	if (this != &wronganimal)
		this->_type = wronganimal._type;
	return (*this);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "some Wronganimal's sound..." << std::endl;
}