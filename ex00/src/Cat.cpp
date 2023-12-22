#include "../includes/Cat.hpp"

Cat::Cat() : public Animal("Cat") {}

Cat::~Cat() {
    std::cout << "A Cat has been destroyed, no cats were hurt in this process" << std::endl;
}

Cat::void makeSound() const {}

Cat::Cat(const Cat& other) {}

Cat::Cat& operator=(const Cat& assign) {}