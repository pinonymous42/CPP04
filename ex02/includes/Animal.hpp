#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define YELLOW "\033[0;33m"
# define BLUE "\033[0;34m"
# define DEFAULT "\033[0m"

class Animal
{
	public:
		Animal();
		virtual ~Animal();
		Animal(const Animal &animal);
		Animal &operator=(const Animal &animal);
		virtual void makeSound() const = 0;
		virtual std::string getType() const;
	protected:
		std::string _type;
};
#endif