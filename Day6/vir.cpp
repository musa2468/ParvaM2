#include <iostream>
using namespace std;

class Animal
{
    public:
        virtual void snd() = 0;
        virtual ~Animal() {}
};

class Dog : public Animal
{
    public:
        void snd() override
        {
            cout <<"Dog Says Woof"<<endl;
        }
};

class Cat : public Animal
{
    public:
        void snd() override
        {
            cout <<"Cat Says Meow"<<endl;
        }
};

int main()
{
    Animal *a1 = new Dog();

    Animal *a2 = new Cat();

    a1->snd();
    a2->snd();

    delete a1;
    delete a2;


    return 0;
}