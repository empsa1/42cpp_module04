#include "../includes/Dog.hpp"

Dog::Dog() {
	std::cout << "Default Dog constructor called" << std::endl;
	this->type = "Dog";
}

Dog::~Dog() {
    std::cout << "A dog has been destroyed, no dogs were hurt in this process" << std::endl;
}

Dog::Dog(const Dog &src) : Animal(src) {
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(Dog const &rhs) {
	if (this == &rhs)
		return *this;
	Animal::operator=(rhs);
	return *this;
}

void Dog::makeSound() const {
	std::cout << "Woof" << std::endl;
}