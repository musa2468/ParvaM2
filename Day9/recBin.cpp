#include <iostream>
#include <fstream>
using namespace std;

int RecBin(int a[], int B, int E, int ele)
{
    if (B > E)
    {
        return -1;
        /* code */
    }

    int M = (B + E)/2;

    if (a[M]== ele)
    {
        return M;
        /* code */
    }
    else if (a[M] == ele)

    {
        return RecBin(a, M +1, E, ele);

        /* code */
    }
    else
    {
        return RecBin(a, B, M-1, ele);
    }
    
    
    
}

int main()
{
    int pid[] = {2001,2002,2003, 2004, 2005,2006};
    int sz = sizeof(pid);

    int ele;
    cout <<"Enter Patient ID TO Search: ";
    cin>>ele;

    int r = RecBin(pid, 0, sz-1, ele);

    if (r != -1)
    {
        cout <<"Patient No Found At Index: "<<r+1<<endl;
    }
    else
    {
        cout<<"Patient With "<<pid[r]<<" Not Found."<<endl;
    }



    return 0;
}