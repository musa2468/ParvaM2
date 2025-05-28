#include <iostream>
using namespace std;

class Pro
{
    private:
        string name;
        float pr;

    public:
        Pro(string name, float pr)
        {
            this->name = name;
            this->pr = pr;
        }

        void dis()
        {
            cout<< "Product : "<<this->name<< " | Price: $"<<this->pr<<endl;
        }
};

int main()
{
    Pro p1("Chevrolet",299999.99);
    Pro p2 ("Lamborghini", 199999.99);

    p1.dis();
    p2.dis();
    


    return 0;
}