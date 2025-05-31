#include <iostream>
//#include <fstream>
using namespace std;

int main()
{
    int a, n;//[] = {4, 7, 9, 90, 67, 98};

    cout<<"Enter The No Of Students: ";
    cin>>n;

    int *rno =new int[n];

    cout << "Enter Student Roll No.:\n";
    for (int i = 0; i < n; i++)
    {
        cout <<i+1 <<". ";
        cin>>rno[i];
        /* code */
    }
    

    int ele;
    cout <<"Enter The Roll No To Search: ";
    cin>>ele;

    //int sz = sizeof(a) / sizeof(a[0]);
    bool fnd = false;


    for (int i = 0; i < n; i++)
    {
        if (rno[i] == ele)
        {
            cout <<"Student Roll No. "<<ele <<" Found At Position "<<i+1<<endl;
            fnd = true;
            break;
        }
    }

    if(!fnd)
    {
        cout << "Student "<< ele <<" Not Found."<<endl;
    }

    delete rno;


    return 0;
}