#include "../includes/WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat() {
	std::cout << "Default WrongCat constructor called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::~WrongCat() {
    std::cout << "A WrongCat has been destroyed, no WrongCats were hurt in this process" << std::endl;
}

WrongCat::WrongCat(const WrongCat &src) : WrongAnimal(src) {
	std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat const &rhs) {
	if (this == &rhs)
		return *this;
	WrongAnimal::operator=(rhs);
	return *this;
}

void WrongCat::makeSound() const {
	std::cout << "WrongCat Mewau" << std::endl;
}