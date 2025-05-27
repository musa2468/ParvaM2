#include <iostream>
using namespace std;

class Print
{
    public:
        void dis(string n)
        {
            cout <<"Name Is "<<n<<endl;
        }

        void dis(int n)
        {
            cout <<"Integer Is "<<n;
        }


};

int main()
{
    Print p;
    p.dis("Musa");
    p.dis(24);


    return 0;
}