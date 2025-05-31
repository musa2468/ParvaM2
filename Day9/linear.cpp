#include <iostream>
//#include <fstream>
using namespace std;

int main()
{
    int a, n;//[] = {4, 7, 9, 90, 67, 98};

    cout<<"Enter The No Of Students: ";
    cin>>n;

    string *names = new string[n];

    cout << "Enter Student Names:\n";
    for (int i = 0; i < n; i++)
    {
        cout <<i+1 <<". ";
        cin>>names[i];
        /* code */
    }
    

    string ele;
    cout <<"Enter The Name To search: ";
    cin>>ele;

    //int sz = sizeof(a) / sizeof(a[0]);
    bool fnd = false;


    for (int i = 0; i < n; i++)
    {
        if (names[i] == ele)
        {
            cout <<"Student "<<ele <<" Found At Position "<<i+1<<endl;
            fnd = true;
            break;
        }
    }

    if(!fnd)
    {
        cout << "Student "<< ele <<" Not Found."<<endl;
    }

    delete names;


    return 0;
}