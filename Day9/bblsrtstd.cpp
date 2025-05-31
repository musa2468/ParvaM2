#include <iostream>
#include <fstream>
using namespace std;

struct Std
{
    string name;
    int mrk;
    /* data */
};


void Bblsrt(Std st[], int n)
{
    for (int i = 0; i < n; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n - i -1; j++)
        {
            if (st[j].mrk > st[j+1].mrk)
            {
                swap (st[j], st[j+1]);
                swapped = true;
                //swap (t[j], t[j+1]);

            }
        }
        if (swapped)
            break;
    }
}

void dis(Std st[], int n)
{
    cout <<"\nRanked List:\n";
    for (int i = 0; i < n; i++)
    {
        cout<< i+1<<". "<<st[i].name<<" - "<< st[i].mrk<<" Marks."<<endl;
        /* code */
    }
    
}


int main()
{
    int n;
    cout<<"Enter No Of Students: ";
    cin>>n;
    cin.ignore();

    Std *st = new Std[n];

    for (int i = 0; i < n; i++)
    {
        cout <<"\nEnter Name Of Student: "<<i+1<<": ";
        getline(cin, st[i].name);
        cout <<"Enter Marks: ";
        cin>>st[i].mrk;
        cin.ignore();
        /* code */
    }

    Bblsrt(st, n);
    dis(st, n);
    

    delete st;
    return 0;
}