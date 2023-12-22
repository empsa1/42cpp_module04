#include "../includes/Cat.hpp"

Cat::Cat() {
	std::cout << "Default Cat constructor called" << std::endl;
	this->type = "Cat";
}

Cat::~Cat() {
    std::cout << "A Cat has been destroyed, no cats were hurt in this process" << std::endl;
}

Cat::Cat(const Cat &src) : Animal(src) {
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(Cat const &rhs) {
	if (this == &rhs)
		return *this;
	Animal::operator=(rhs);
	return *this;
}

void Cat::makeSound() const {
	std::cout << "Mewau" << std::endl;
}