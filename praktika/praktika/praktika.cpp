#include <iostream>
#include <string>

using namespace std;

class Animal {
protected:
    string name;
    double weight;
    string continent;

public:
    Animal(string _name, double _weight, string _continent) : name(_name), weight(_weight), continent(_continent) {}

    virtual void Eat() = 0;
    virtual void Sleep() = 0;
    virtual void Move() = 0;
    virtual void MakeSound() = 0;
};

class ISwimable {
public:
    virtual void Swim() = 0;
};

class IFlyable {
public:
    virtual void Fly() = 0;
};

class Cat : public Animal, public ISwimable {
public:
    Cat(string _name, double _weight, string _continent) : Animal(_name, _weight, _continent) {}

    void Eat() override {
        cout << "Cat is eating ";
    }

    void Sleep() override {
        cout << "Cat is sleeping ";
    }

    void Move() override {
        cout << "Cat is moving ";
    }

    void MakeSound() override {
        cout << "Meow! ";
    }

    void Swim() override {
        cout << "Cat is swimming ";
    }
};

class Dog : public Animal, public ISwimable {
public:
    Dog(string _name, double _weight, string _continent) : Animal(_name, _weight, _continent) {}

    void Eat() override {
        cout << "Dog is eating ";
    }

    void Sleep() override {
        cout << "Dog is sleeping ";
    }

    void Move() override {
        cout << "Dog is moving ";
    }

    void MakeSound() override {
        cout << "Woof! ";
    }

    void Swim() override {
        cout << "Dog is swimming ";
    }
};

class Parrot : public Animal, public IFlyable {
public:
    Parrot(string _name, double _weight, string _continent) : Animal(_name, _weight, _continent) {}

    void Eat() override {
        cout << "Parrot is eating ";
    }

    void Sleep() override {
        cout << "Parrot is sleeping ";
    }

    void Move() override {
        cout << "Parrot is moving ";
    }

    void MakeSound() override {
        cout << "Squawk! ";
    }

    void Fly() override {
        cout << "Parrot is flying ";
    }
};

class Duck : public Animal, public ISwimable, public IFlyable {
public:
    Duck(string _name, double _weight, string _continent) : Animal(_name, _weight, _continent) {}

    void Eat() override {
        cout << "Duck is eating ";
    }

    void Sleep() override {
        cout << "Duck is sleeping ";
    }

    void Move() override {
        cout << "Duck is moving ";
    }

    void MakeSound() override {
        cout << "Quack! ";
    }

    void Swim() override {
        cout << "Duck is swimming ";
    }

    void Fly() override {
        cout << "Duck is flying ";
    }
};

int main() {
    Cat cat("Sherry", 5.2, "Ukraine");
    Dog dog("Chaplin", 10.5, "Europe");
    Parrot parrot("Kesha", 0.5, "Romania");
    Duck duck("Scrooge", 3.7, "Europe");

    cout << "Cat actions: ";
    cat.Eat();
    cat.Sleep();
    cat.Move();
    cat.MakeSound();
    cat.Swim();

    cout << "Dog actions: ";
    dog.Eat();
    dog.Sleep();
    dog.Move();
    dog.MakeSound();
    dog.Swim();

    cout << "Parrot actions: ";
    parrot.Eat();
    parrot.Sleep();
    parrot.Move();
    parrot.MakeSound();

    cout << "Duck actions: ";
    duck.Eat();
    duck.Sleep();
    duck.Move();
    duck.MakeSound();
    duck.Swim();
    duck.Fly();

    return 0;
}
