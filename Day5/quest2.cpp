#include <iostream>
using namespace std;

class Animal
{
    public:
        Animal()
        {
            cout <<"Animal Constructor Called\n";
        }
        ~Animal()
        {
            cout <<"Animal Destructor Called\n";

        }

};

class Dog : public Animal
{
    public:
        Dog()
        {
            cout <<"Dog Const Called.\n";
        }
        ~Dog()
        {
            cout << "Dog Destr Called.\n";
        }
};

int main()
{
    Dog g;


    return 0;
}