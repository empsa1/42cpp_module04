#include "../includes/Animal.hpp"

Animal::Animal() : type("not defined") {
    std::cout << "Creating an Animal of type: " << this->type << std::endl;
}

Animal::Animal(const Animal &other) : type(other.type) {
     std::cout << "Creating an Animal by copying from another of type: " << type << std::endl;
}

Animal::virtual ~Animal() {
    std::cout << "Destroying an Animal of type: " << type << std::endl;
}

Animal& Animal::operator=(const Animal& other) {
    type = other.type;
    std::cout << "Assigning an Animal of type: " << type << std::endl;
    return *this;
}