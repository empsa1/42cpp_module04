#ifndef DOG_HPP
# define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"   
#include <iostream>

class Dog : public AAnimal {
 public:
    Dog();
    virtual ~Dog();
    Dog(const Dog& other);
    Dog& operator=(const Dog& assign);

    void makeSound() const;

    void giveIdea(std::string idea) const;
	const Brain *getBrain() const;
private:
    Brain *brain;
};

#endif