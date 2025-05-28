#include <iostream>
using namespace std;


/*void shft(int n)
{
    string emp[] = {};
    char s[] = {};

    for (int i=0; i<n; i++)
    {
        cout << "Enter Employee "<< (i +1) << " Name: ";
        cin>>emp[i];
        cout << " | Shift: ";
        cin>>s;
    }
}*/

int main()

{
    int n,c, nm=0, na=0,nn = 0;

    cout<<"Enter No Of Employees: ";
    cin>>n;

    string emp[] = {"Rohith","Musa", "Tony", "Bruce", "Steve"};
    char s[] = {'M','A', 'N', 'M', 'N'};

    for (int i=0; i<n; i++)
    {
        cout << "Enter Employee "<< (i +1) << " Name: "<<emp[i];
        //cin>>emp[i];
        cout << " | Shift: "<<s[i]<<endl;
        //cin>>s[i];
    }

    for (int i=0; i<n; i++)
    {
        if(s[i]== 'M')
            nm++;
        else if(s[i] == 'A')
            na ++;
        else
            nn++;

    }

    cout <<"\n\n ----- Shift Details -----\n";

    cout <<"Morning Shift "<<nm<<" Employees.\n";
    cout <<"Afternoon Shift "<<na<<" Employees.\n";
    cout <<"Night Shift "<<nn<<" Employees.\n";


    //void shft(5);


    
    

    

    /*for (int i=0; i<n; i++)
    {
        cout << "Enter Employee "<< (i +1) << " Name: ";
        cin>>emp[i];
    }

    cout << "\n\t--- Employee List---\n";

    for (int i= 0; i<n; i++)
    {
        cout <<(i +1)<< ". "<< emp[i]<<endl;

    }


    delete [] emp;*/



    return 0;
}