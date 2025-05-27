#include <iostream>
#include <string>
using namespace std;

class FIR
{
    public:
    string name;

    FIR(string n) : name(n){}
    virtual void RegCase() = 0;

    virtual ~FIR() {}

};

class Theft : public FIR
{
    public:
        Theft (string n) : FIR(n){}

        void RegCase() override
        {
            cout << "Theft FIR Registered For "<<name<<"."<<endl;
            cout << "Action: Investigation Started For stolen Property."<<endl;
        }

};

class Murder : public FIR
{
    public:
        Murder (string n) : FIR(n){}

        void RegCase() override
        {
            cout << "Theft FIR Registered For "<<name<<"."<<endl;
            cout << "Action: Investigation Started For The Murderer."<<endl;
        }
};

class Acci : public FIR
{
    public:
        Acci (string n) : FIR(n){}

        void RegCase() override
        {
            cout << "Theft FIR Registered For "<<name<<"."<<endl;
            cout << "Action: Investigation Started For Accident."<<endl;
        }
};

class Kidn : public FIR
{
    public:
        Kidn (string n) : FIR(n){}

        void RegCase() override
        {
            cout << "Theft FIR Registered For "<<name<<"."<<endl;
            cout << "Action: Investigation Started For The Kidnapper."<<endl;
        }
};



int main()
{
    FIR *c1 = new Theft("Gautham");
    FIR *c2 = new Murder("Rohith");
    FIR *c3 = new Kidn("Musa");
    FIR *c4 = new Acci("Ramesh");

    cout <<"=== FIR Registration ==="<<endl;
    c1->RegCase();
    cout <<endl<<endl;

    c2->RegCase();
    cout <<endl<<endl;

    c3->RegCase();
    cout <<endl<<endl;

    delete c1,c2,c3;



    return 0;
}