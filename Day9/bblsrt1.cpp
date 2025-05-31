#include <iostream>
#include <fstream>
using namespace std;
/*void bblsrt(int id[], string t[], int n)
{
    
    
}*/

int main()
{
    int a[] = {12,56,98,789,67,90};
    int n = sizeof(a)/ sizeof(a[0]);


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i -1; j++)
        {
            if (a[j] > a[j+1])
            {
                //swap (id[j], id[j+1]);
                //swap (t[j], t[j+1]);
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = a[j];

            }
        }
    }

    cout <<"Sorted Array: ";
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
        /* code */
    }
    


    return 0;
}
