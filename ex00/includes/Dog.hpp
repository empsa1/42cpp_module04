#ifndef DOG_HPP
# define DOG_HPP

class Dog : public Animal {
 public:
    Dog();
    virtual ~Dog();
    Dog(const Dog& other);
    Dog& operator=(const Dog& assign);

    void makeSound() const;
};

#endif