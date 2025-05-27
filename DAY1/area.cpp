#include <iostream>
using namespace std;

int main()
{
    int l,b,ar;

    cout <<"Enter The Two Sides Of The Rectangle :";
    cin >> l >>b;
    
    ar = 2 * (l + b);
    cout << "The Are Of The Rectangle Is "<<ar;
    
    return 0;
}