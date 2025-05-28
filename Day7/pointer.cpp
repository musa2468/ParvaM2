#include <iostream>
using namespace std;



int main()
{
    int n = 10;
    int *ptr = &n;

    cout <<"Num : "<<n<<endl;
    cout <<"Address of Num : "<<ptr<<endl;
    cout <<"Ptr value : "<<*ptr <<endl;


    return 0;
}