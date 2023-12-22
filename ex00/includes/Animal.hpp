#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal {
protected:
    std::string type;

public:
    Animal();
    virtual ~Animal();
    const string& getType() const;
    Animal(const Animal& other);
    Animal& operator=(const Animal& assign);

	virtual void makeSound() const;
	virtual std::string const &getType() const;
}

#endif