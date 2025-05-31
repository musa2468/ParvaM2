#include <iostream>
#include <fstream>
using namespace std;

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


void books(int a[], string t[], int n)
{
    cout <<"\nAvailable Books\n";
    for (int i = 0; i < n; i++)
    {
        cout <<"ID: "<< a[i]<< " - "<<t[i]<<endl;
        /* code */
    }

    
}


int main()
{
    const int n = 7;
    int idb[] = {101,102,103,104,105,106,107,108,109,110};
    string t[n] = {
        "Harry Potter", "Goosebumps", "It Ends With Us", "It Starts With Us", "The Jungle Book", "The Girl In Room 107",
        "Minions"
    };

    books(idb, t, n);

    int ele;
    cout<<"\nEnter the Book ID To Search: ";
    cin>>ele;

    //int n = sizeof(a);

    int r= BinSrch(idb,n,ele);

    if (r != -1)
    {
        cout <<"Book Found: "<<t[r]<<" (ID:  "<<idb[r]<<")"<<endl;
    }
    else
    {
        cout<<"Book With ID: "<<idb[r]<<" Not Found."<<endl;
    }

    return 0;
}