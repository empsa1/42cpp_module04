#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

#include <iostream>

class WrongAnimal {
public:
		WrongAnimal();
		WrongAnimal(WrongAnimal const &src);
		virtual ~WrongAnimal();

		WrongAnimal &operator=(WrongAnimal const &rhs);

		virtual void makeSound() const;
		virtual std::string const &getType() const;

	protected:
		std::string type;
};

#endif