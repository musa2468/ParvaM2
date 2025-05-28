#include <iostream>
using namespace std;

void dis(string *bid, string *pid, int sz)
{
    
    for (int i=0; i<sz; i++)
    {
        cout<<"\tPatient ID: "<<*(pid +i)
    <<" | Bed ID: "<<*(bid + i)<<endl;
    }
    cout <<endl;
    
}


int main()
{
    const int sz =5;
    string bid[sz] = {"A101", "A102", "A103", "A104"};
    string pid[sz] = {"P 12", "P 48", "P 24", "P 14"};

    string *ptrb = bid;
    string *ptrP = pid;

    cout <<"     \n==== Morning ====\n";
    dis(ptrb, ptrP, sz);

    *(ptrb + 2) = "A201";
    *(ptrP + 1) = "P 22";

    cout <<"     \n\n==== Afternoon ===\n\t";
    dis(ptrb, ptrP, sz);


    return 0;
}