#include "Cat.hpp"

Cat::Cat()
{
	try
	{
		this->_cat_brain = new Brain;
	}
	catch(const std::bad_alloc &e)
	{
		std::cout << e.what() << std::endl;
		std::exit(1);
	}
	this->_type = "Cat";
	std::cout << BLUE << "Cat's default constructor called" << DEFAULT << std::endl;
}

Cat::~Cat()
{
	std::cout << BLUE << "Cat's deconstructor called" << DEFAULT << std::endl;
	delete this->_cat_brain;
}

Cat::Cat(const Cat &cat)
{
	try
	{
		this->_cat_brain = new Brain;
	}
	catch(const std::bad_alloc &e)
	{
		std::cout << e.what() << std::endl;
		std::exit(1);
	}
	this->_type = cat.getType();
	this->_cat_brain->copyIdeas(*(cat._cat_brain));
	std::cout << BLUE << "Cat's copy constructor called" << DEFAULT << std::endl;
}

Cat &Cat::operator=(const Cat &cat)
{
	if (this != &cat)
	{
		this->_type = cat._type;
		this->_cat_brain->copyIdeas(*(cat._cat_brain));
	}
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << BLUE << "Meow..." << DEFAULT << std::endl;
}

Brain &Cat::getBrain() const
{
	return (*(this->_cat_brain));
}