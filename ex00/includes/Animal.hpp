#ifndef ANIMAL_HPP
# define ANIMAL_HPP

class Animal {
protected:
    std::string type;

public:
    Animal();
    virtual ~Animal();
    const string& getType() const;
    virtual void makeSound() const;

private:
    Animal(const Animal& other);
    Animal& operator=(const Animal& assign);
}

#endif