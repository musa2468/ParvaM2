#include <iostream>
using namespace std;

class Car
{
    public:
        string m;
        Car (string m)
        {
            this->m = m;
        }

        void show()
        {
            cout<<"Car Model : "<< this->m<<endl;
        }
};

int main()
{
    Car s("G M C");
    s.show();


    return 0;
}