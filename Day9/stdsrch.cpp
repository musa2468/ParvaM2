#include <iostream>
//#include <fstream>
using namespace std;

int main()
{
    int a, n;//[] = {4, 7, 9, 90, 67, 98};
    char inp;
    string ele;

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
    
    do
    {
        

        cout <<"Enter The Name To Search: ";
        cin>>ele;

        //int sz = sizeof(a) / sizeof(a[0]);
        bool fnd = false;


        for (int i = 0; i < n; i++)
        {
            if (names[i] == ele)
            {
                cout <<"Student "<<ele <<" Found At Position "<<i+1<<endl;
                fnd = true;
                //break;
            }
        }

        if(!fnd)
        {
            cout << "Student "<< ele <<" Not Found."<<endl;
        }

        cout <<"Do You Want To Search For A Student (y/n): ";
        cin>>inp;


        /* code */
    } while (inp == 'y'||inp == 'Y');
    

    
    /*cout <<"Enter The Name To Search: ";
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
    }*/

    delete names;


    return 0;
}