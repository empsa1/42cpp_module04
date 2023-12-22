#include "../includes/Dog.hpp"

Dog::Dog() : public Animal("Dog") {}

Dog::~Dog() {
    std::cout << "A dog has been destroyed, no dogs were hurt in this process" << std::endl;
}

Dog::void makeSound() const {}

Dog::Dog(const Dog& other) {}

Dog::Dog& operator=(const Dog& assign) {}