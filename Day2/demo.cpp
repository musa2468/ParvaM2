#include <iostream>
using namespace std;

class calculator{
    public:
    int add(int a, int b);
    int subtract(int a, int b);

};
int calculator::add(int a, int b)
{
    return a+b;
}
int calculator::subtract(int a, int b)
{
    return a-b;
}


int main()
{
    calculator c;
    cout << "Addition ="<<c.add(45,75)<<endl;
    cout <<"Subtraction ="<<c.subtract(100,52)<<endl;


    return 0;
}