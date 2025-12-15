#include <iostream>

using namespace std;

class Animal
{
    public:
        virtual void makeSound() const = 0;
        virtual void move() const = 0;
        virtual ~Animal(){}
    };

    class Lion : public Animal
    {
    public:
        void makeSound() const 
        {
            cout << "lion roars" << endl;
        }

        void move() const 
        {
            cout << "lion runs" << endl;
        }
    };

    class Fish : public Animal
    {
    public:
        void makeSound() const 
        {
            cout << "fish does under water sounds" << endl;
        }

        void move() const 
        {
            cout << "fish swims" << endl;
        }
    };

int main()
{
    Animal *animals[] = 
    {
        new Lion(), 
        new Fish()
    };

    for (Animal *animal : animals)
    {
        animal->makeSound();
        animal->move();
    }

    for (Animal *animal : animals)
    {
        delete animal;
    }

    return 0;
}