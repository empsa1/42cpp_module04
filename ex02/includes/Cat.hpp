#ifndef CAT_HPP
# define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"
#include <iostream>

class Cat : public AAnimal {
public:
    Cat();
    virtual ~Cat();
    Cat(const Cat& other);
    Cat& operator=(const Cat& assign);

    void makeSound() const;

    void giveIdea(std::string idea) const;
	const Brain *getBrain() const;
private:
    Brain *brain;
};

#endif