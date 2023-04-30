#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
	public:
		Brain();
		~Brain();
		Brain(const Brain &brain);
		Brain &operator=(const Brain &brain);
		std::string getIdea(unsigned int i) const;
		void copyIdeas(const Brain &brain);
		void setIdeas(const std::string &idea, unsigned int start, unsigned int end);
	protected:
		std::string _ideas[100];
};
#endif