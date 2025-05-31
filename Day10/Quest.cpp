#include <iostream>
#include <fstream>
using namespace std;


//search for age 
int BinSrch(int a[], int n, int ele)
{
    int B=0, E=n-1;
    while (B < E)
    {
        int M = (B + E)/2;

        if (a[M] == ele)
        {
            return M;
        }
        else if(a[M] < ele)
            B = M + 1;
        else
            E = M - 1;
        
    }

    return -1;
}


//All Details Show
void Alldet(float a[], string t[], int n)
{
    cout <<"\nPeople List\n";
    for (int i = 0; i < n; i++)
    {
        cout <<i+1 <<". Aadhar No.: "<< a[i]<< " | Name: "<<t[i]<<endl;
        /* code */
    }

    
}



int main()
{

    //All Details...
    const int n= 25;
    float adh[] = {34738,15902,18603,10408,10975,13576,12457,16378,24309,22110,
        84725,13846,93746,34576,23736,89734,98564,78328,
    };
    string pname[n] = {
        "James Harry", "Aaron Carter", "Mohammed", "Sahil", "Ahmed", "Layla",
        "David", "Jhonny", "Visha", "Owaiz", "Rahul", "Bigil", "Sikandar",
        "Tiger", ""
    };


    return 0;
}