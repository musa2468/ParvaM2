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

void bblsrt(int id[], string t[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (id[j] > id[j+1])
            {
                swap (id[j], id[j+1]);
                swap (t[j], t[j+1]);
            }
        }
    }
    
}

int main()
{

    int n;
    cout <<"Enter No Of Books: ";
    cin>>n;

    int *bid = new int[n];
    string *t = new string[n];

    cout <<"Enter Book ID And Title:\n";

    for (int i = 0; i < n; i++)
    {
        cout <<"Book "<<i+1<<" ID: ";
        cin>>bid[i];
        cin.ignore();
        cout<<"Book "<<i+1<<" Title: ";
        getline(cin, t[i]);
        /* code */
    }

    bblsrt(bid, t,n);

    char ch;
    do
    {
        int ele;
        cout<<"\nEnter Book ID To Search: ";
        cin>>ele;

        int r = BinSrch(bid, n, ele);

        if (r != -1)
        {
            cout <<"Book Found: "<<t[r]<<" (ID:  "<<bid[r]<<")"<<endl;
        }
        else
        {
            cout<<"Book With ID: "<<bid[r]<<" Not Found."<<endl;
        }

        cout <<"Do You Want To Search Again (y/n): ";
        cin>>ch;

        /* code */
    } while (ch == 'y' || ch == 'Y');
    
    
    

    return 0;
}