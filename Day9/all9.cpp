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

int lin(Std a[], int n, string t)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i].name == t)
        {
            return 1;
            /* code */
        }
        return -1;
    }
    
}

int BinSrch(int a[], int n, int ele)
{
    int B=0, E=n-1;
    while (B < E)
    {
        int M = (B + E)/2;

        if (a[M] == ele)
        {
            return M;
            /* code */
        }
        else if(a[M] < ele)
            B = M + 1;
        else
            E = M - 1;
        
        /* code */
    }

    return -1;
}

int BinSrch(int a[], int n, int ele)
{
    int B=0, E=n-1;
    while (B < E)
    {
        int M = (B + E)/2;

        if (a[M] == ele)
        {
            return M;
            /* code */
        }
        else if(a[M] < ele)
            B = M + 1;
        else
            E = M - 1;
        
        /* code */
    }

    return -1;
}

int dis(Std a[], int n)
{
    cout<<"\nStudents List:\n";
    for (int i = 0; i < n; i++)
    {
        cout<<i+1<<". "<<a[i].name<<" - "<<a[i].mrk<<" Marks\n";

        /* code */
    }
    
}

int main()
{
    int n;
    cout<<"Enter No Of Students: ";
    cin>>n;
    cin.ignore();

    Std* st = new Std[n];

    for (int i = 0; i < n; i++)
    {
        cout <<"\nEnter Name Of Student: "<<i+1<<": ";
        getline(cin, st[i].name);
        cout <<"Enter Marks: ";
        cin>>st[i].mrk;
        cin.ignore();
        /* code */
    }

    cout <<"\nOriginal Student List:\n";
    dis(st,n);

    Bblsrt(st, n);

    cout<<"\nStudents Sorted By Marks(Ascending):\n";

    dis(st, n);
    
    string ele;
    cout<<"\nEnter Name To Search(Linear Search): ";
    getline(cin, ele);
    int ind = lin(st,n, ele);
    if (ind != -1)
    {
        cout <<"Found "<<st[ind].name << "With Marks: "<<st[ind].mrk<<endl;
    }
    else
    {
        cout <<"Student Not Found..."<<endl;
    }

    int mr;
    cout <<"\nEnter Marks To Search(Binary Search): ";
    cin>>mr;
    int in = BinSrch(st[ind], n ,mr);

    if (in != -1)
    {
        cout <<"Found "<<st[in].name << "With Marks: "<<st[in].mrk<<endl;
    }
    else
    {
        cout <<"Student Not Found..."<<endl;
    }


    


    return 0;
}