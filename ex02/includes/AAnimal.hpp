#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class AAnimal {
	public:
		AAnimal();
		AAnimal(AAnimal const &src);
		virtual ~AAnimal();

		AAnimal &operator=(AAnimal const &rhs);

		virtual void makeSound() const = 0;
		virtual std::string const &getType() const;

	protected:
		std::string type;
};

#endif