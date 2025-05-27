#include <iostream>
#include <string>
using namespace std;

class Book
{
    public:
        string name;
        int seat;

        Book(string n = "", int s = 1) : name (n), seat (s){}

        virtual void bTkt() = 0;

        virtual ~Book() {}

};

class Fli : public Book
{
    public:
        Fli(string n, int s): Book (n, s) {}

        void bTkt()
        {
            cout << "Flight Ticket Booked For "<< name<<" With "<<seat <<" Seats(s) "<<endl;
        }

};

class Bus : public Book
{
    public:
        Bus(string n, int s): Book (n, s) {}

        void bTkt()
        {
            cout << "Bus Ticket Booked For "<< name<<" With "<<seat <<" Seats(s) "<<endl;
        }


};

class Trn : public Book
{
    public:
        Trn(string n, int s): Book (n, s) {}

        void bTkt()
        {
            cout << "Train Ticket Booked For "<< name<<" With "<<seat <<" Seats(s) "<<endl;
        }


};

class Bmngr
{
    public:
        void CB(string n)
        {
            cout << "Booking Confirmed For "<<n<<endl;
        }

        void CB(string n, int s)
        {
            cout << "Booking Confirmed For "<<n<<" With "<<s<<" Seat(s)."<<endl;
        }
        
        void CB(string n, int s, string date)
        {
            cout << "Booking Confirmed For "<<n<< " | Seats : "<< s<<" | Date : "<< date<<endl;
        }
};

class GB
{
    public:
        int Ts;
        GB(int s=0): Ts (s){}

        GB operator+ (const GB &ot)
        {
            return GB(this->Ts + ot.Ts);
        }

        void dis()
        {
            cout <<"Total Group Seats Booked : "<<Ts<<endl;
        }
};

int main()
{
    Book *b1 = new Fli("Musa", 2);
    Book *b2 = new Trn("Musa", 5);
    Book *b3 = new Bus("Musa", 1);

    cout <<"\n\n=== RunTime Polymorphism ===\n";
    b1->bTkt();
    b2->bTkt();
    b3->bTkt();

    cout <<"\n\n === Function Overloading ===\n";
    Bmngr man;
    man.CB("David");
    man.CB("Dhruv", 4);
    man.CB("Aysha", 5, "24-08-2025");

    cout <<"\n\n === Operator Overloading ===\n";
    GB g1(4), g2(10), g3 = g1 + g2;
    g3.dis();


    delete b1,b2,b3;



    return 0;
}