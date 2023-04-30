#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define YELLOW "\033[0;33m"
# define BLUE "\033[0;34m"
# define DEFAULT "\033[0m"

class WrongAnimal
{
	public:
		WrongAnimal();
		virtual ~WrongAnimal();
		WrongAnimal(const WrongAnimal &wronganimal);
		WrongAnimal &operator=(const WrongAnimal &wronganimal);
		void makeSound() const;
		virtual std::string getType() const;
	protected:
		std::string _type;
};
#endif