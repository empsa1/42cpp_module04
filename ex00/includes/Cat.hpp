#ifndef CAT_HPP
# define CAT_HPP

class Cat : public Animal {
public:
    Cat();

    ~Cat();

    void makeSound() const;

private:
    Cat(const Cat& other);
    Cat& operator=(const Cat& assign);
};

#endif