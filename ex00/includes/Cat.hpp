#ifndef CAT_HPP
# define CAT_HPP

class Cat : public Animal {
public:
    Cat();
    virtual ~Cat();
    Cat(const Cat& other);
    Cat& operator=(const Cat& assign);

    void makeSound() const;
};

#endif