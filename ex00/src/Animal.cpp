#include "../includes/Animal.hpp"

Animal::Animal() : type("Unknown") {
	std::cout << "Default Animal constructor called" << std::endl;
}

Animal::Animal(const Animal &src) : type(src.type) {
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal &Animal::operator=(Animal const &rhs) {
	if (this == &rhs)
		return *this;
	this->type = rhs.type;
	return *this;
}

Animal::~Animal() {
	std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound() const {
	std::cout << "Its mute!" << std::endl;
}

std::string const &Animal::getType() const {
	return this->type;
}