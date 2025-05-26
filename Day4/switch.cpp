#include <iostream>
using namespace std;

class Payment
{
    public:
        virtual ~Payment(){}

        virtual void Pay() = 0;

};

class Crd : public Payment
{
    public:
        void Pay() override
        {
            cout << "Processing Credit Card Payment... "<< endl;
        }
};

class PPl : public Payment
{
    public:
        void Pay() override
        {
            cout << "Processing PayPal Payment... "<< endl;
        }
};



int main()
{
    Payment *paym = nullptr;
    int ch;

    cout << "Choose A PAyment method \n1. Credit Card\n2.PayPal";
    cout << "Enter Your Choice (1 Or 2) : ";
    cin >> ch;

    switch(ch)
    {
        case 1:
            paym = new Crd();
            cout<<"5k or 10k\t";
            break;
        case 2:
            paym = new PPl();
            cout <<"20k or 30k\t";
            break;
        default:
            cout << "Invalid Choice.."<<endl;
            return 1;
    }

    paym -> Pay();

    delete paym;

    return 0;
}