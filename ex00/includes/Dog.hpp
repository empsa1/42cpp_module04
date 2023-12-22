#ifndef DOG_HPP
# define DOG_HPP

class Dog : public Animal {
 public:
    Dog();

    ~Dog();

    void makeSound() const;

    private:
    Dog(const Dog& other);
    Dog& operator=(const Dog& assign);
};

#endif