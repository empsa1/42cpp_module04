#include "../includes/Cat.hpp"

Cat::Cat() {
	std::cout << "Default Cat constructor called" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::~Cat() {
    std::cout << "A Cat has been destroyed, no cats were hurt in this process" << std::endl;
}

Cat::Cat(const Cat &src) : Animal(src) {
	std::cout << "Cat copy constructor called" << std::endl;
	this->brain = new Brain(*src.brain);
}

Cat &Cat::operator=(Cat const &rhs) {
	if (this == &rhs)
		return *this;
	Animal::operator=(rhs);
	delete this->brain;
	this->brain = new Brain(*rhs.brain);
	return *this;
}

void Cat::makeSound() const {
	std::cout << "Mewau" << std::endl;
}

void Cat::giveIdea(std::string idea) const {
	this->brain->addIdea(idea);
}

const Brain *Cat::getBrain() const {
	return this->brain;
}