#include <iostream>
using namespace std;

class Std
{
    private:
        string name;
        int *marks;
        int *id;
    
    public:
        Std(string n, int m, int i)
        {
            this->name = n;
            this->marks = new int(m);
            this->id = new int(i);

        }

        void Bonus(int b)
        {
            *marks += b;
        }

        void dis()
        {
            cout <<"Student: "<<name<<" | Id: "<< *id<< " | Marks:"
            << *marks<<endl;
        }

        ~Std()
        {
            cout <<"Deleting Student: "<<name<<endl;
            delete marks, id;
        }

};

int main()
{
    int sc[] = {90, 95, 88};
    int *psc = sc;

    cout <<"Scores: ";

    for(int i=0; i<3; i++)
    {
        cout <<*(psc + i)<< " ";
    }
    cout <<endl;

    Std *s1 = new Std("Musa", 99, 1001);
    Std *s2 = new Std("Mohammed", 95, 1002);

    s2->Bonus(5);
    s1->Bonus(1);

    s1->dis();
    s2->dis();


    return 0;
}