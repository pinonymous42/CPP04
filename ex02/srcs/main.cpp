#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	int i;

	Animal *animals[4];

	std::cout << std::endl;
	animals[0] = new Dog;
	std::cout << std::endl;
	animals[1] = new Dog;
	std::cout << std::endl;
	animals[2] = new Cat;
	std::cout << std::endl;
	animals[3] = new Cat;
	std::cout << std::endl;

	for (i = 0; i < 4; i++)
	{
		std::cout << "[" << i << "]" << std::endl;
		delete animals[i];
	}

	// Dog *new_dog = new Dog;
	// new_dog->getBrain().setIdeas("hungry", 0, 100);
	// for (int i = 0; i < 10; i++)
	// 	std::cout << "before: new_dog: " << new_dog->getBrain().getIdea(i) << std::endl;
	// Dog puppy1 = *new_dog;
	// for (int i = 0; i < 10; i++)
	// 	std::cout << "before: puppy1: " << puppy1.getBrain().getIdea(i) << std::endl;
	// // std::cout << __FILE__ << " " << __LINE__ << std::endl;
	// new_dog->getBrain().setIdeas("active", 0, 5);
	// for (int i = 0; i < 10; i++)
	// 	std::cout << "after: new_dog: " << new_dog->getBrain().getIdea(i) << std::endl;
	// for (int i = 0; i < 10; i++)
	// 	std::cout << "after: puppy1: " << puppy1.getBrain().getIdea(i) << std::endl;

	// new_dog->getBrain().setIdeas("hungry", 0, 100);
	// for (int i = 0; i < 10; i++)
	// 	std::cout << "before: new_dog: " << new_dog->getBrain().getIdea(i) << std::endl;
	// Dog puppy2(*new_dog);
	// for (int i = 0; i < 10; i++)
	// 	std::cout << "before: puppy2: " << puppy2.getBrain().getIdea(i) << std::endl;
	// // std::cout << __FILE__ << " " << __LINE__ << std::endl;
	// new_dog->getBrain().setIdeas("positive", 0, 5);
	// for (int i = 0; i < 10; i++)
	// 	std::cout << "after: new_dog: " << new_dog->getBrain().getIdea(i) << std::endl;
	// for (int i = 0; i < 10; i++)
	// 	std::cout << "after: puppy2: " << puppy2.getBrain().getIdea(i) << std::endl;
	// delete new_dog;
	return 0;
}