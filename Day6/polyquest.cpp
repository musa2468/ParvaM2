#include <iostream>
using namespace std;

class Shop
{
    public:
        void prod(int id)
        {
            cout <<"Generating Invoice For Product ID : "<<id<<endl;
            cout << "Default Quantity : 1| No Discount Applied."<<endl;
        }

        void prod(int id, int q)
        {
            cout <<"Generating Invoice For Product ID : "<<id<<endl;
            cout << " Quantity : "<<q<<"| No Discount Applied."<<endl;
        }

        void prod(int id, int q, float d)
        {
            cout <<"Generating Invoice For Product ID : "<<id<<endl;
            cout << " Quantity : "<<q<<"| Discount Applied : "<<d<<"%"<<endl;
        }
};

int main()
{
    Shop s;
    s.prod(101);
    s.prod(102, 3);
    s.prod(103, 5, 10.5);


    return 0;
}