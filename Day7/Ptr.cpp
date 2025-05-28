#include <iostream>
using namespace std;

void dis(int *inv, int sz)
{
    cout <<"WareHouse Inv : ";
    for (int i =0; i<sz; i++)
    {
        cout <<inv[i]<<" ";
    }
    cout <<endl;
}



int main()
{
    int inv[5] = {13,56,78,98,9};
    int *ptr = inv;

    dis(ptr, 5);

    *(ptr + 2) =25;

    cout<<"Updated Inv : ";
    for(int i =0; i<5; i++)
    {
        cout << inv[i]<<" ";
    }
    cout <<endl;


    return 0;
}