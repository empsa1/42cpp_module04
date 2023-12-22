#include "../includes/AAnimal.hpp"

AAnimal::AAnimal() : type("Unknown") {
	std::cout << "Default AAnimal constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &src) : type(src.type) {
	std::cout << "AAnimal copy constructor called" << std::endl;
}

AAnimal &AAnimal::operator=(AAnimal const &rhs) {
	if (this == &rhs)
		return *this;
	this->type = rhs.type;
	return *this;
}

AAnimal::~AAnimal() {
	std::cout << "AAnimal destructor called" << std::endl;
}

void AAnimal::makeSound() const {
	std::cout << "Its mute!" << std::endl;
}

std::string const &AAnimal::getType() const {
	return this->type;
}
