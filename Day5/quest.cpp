#include <iostream>
using namespace std;

class Person
{
    protected:
        string name;
        int age;
    
    public:
        void details(string n, int a)
        {
            name = n;
            age = a;
        }
};

class Patient : public Person
{
    //private:
    protected:
        string dis;
        int fee;
    public:

        void info(string d,int f)
        {
            fee = f;
            dis = d;
        }
        
        void display()
        {
            
            cout <<"Name :"<<name<<endl;
            cout << "Age :"<<age<<endl;
            cout <<"Disease : "<<dis<<endl;
            cout <<"Bill Amount : $"<<fee<<endl;
            
        }
        string getdis()
        {
            return dis;
        }

        int getbill()
        {
            return fee;
        }
};

class Doctor
{
    public:
        void dignose(Patient &p)
        {
            cout <<"Reviewing Patient's Condition : "<<p.getdis();
        }
};

int main()
{
    Patient P;
    P.details("John Doe", 45);
    P.info("Pnemonia", 3200);

    P.display();

    Doctor d;
    d.dignose(P);


    return 0;
}