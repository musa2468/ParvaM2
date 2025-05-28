#include <iostream>
using namespace std;

class Rent
{
    public:
        string m;
        int yr;
        string name;

    public:
        Rent()
        {
            cout <<"Enter Model: ";
            cin>>m;
            cout <<"Enter Year: ";
            cin>>yr;
            cout << "Enter Owner: ";
            cin>>name;
        }

        void show()
        {
            cout << "Model: "<<m<< " | Year: "<<yr<<" | Owner: "<<name<<endl;
        }
        
};

int main()
{

    int n;
    
    cout<<"Enter No Of Vehicles: ";
    cin>>n;

    Rent*v = new Rent(), *v2 = new Rent (), *v3 = new Rent ();
    for (int i=0; i<n; i++)
    {
        Rent();
        cout<<endl;
    }
    
    v->show();
    v2->show();
    v3->show();

    delete v,v2,v3;

    return 0;
}