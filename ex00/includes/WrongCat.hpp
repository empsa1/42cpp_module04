#ifndef WRONG_CAT_HPP
# define WRONG_CAT_HPP

#include "WrongAnimal.hpp"
#include <iostream>

class WrongCat : public WrongAnimal {
public:
    WrongCat();
    virtual ~WrongCat();
    WrongCat(const WrongCat& other);
    WrongCat& operator=(const WrongCat& assign);

    void makeSound() const;
};

#endif