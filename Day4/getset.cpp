#include <iostream>
using namespace std;

class Std
{
    private:
        int rno;

    public:
        void setrno(int r)
        {
            rno=r;
        }

        int getrno()
        {
            return rno;
        }

};

int main()
{
    Std s1;

    s1.setrno(24);
    cout<<s1.getrno()<<endl;

    return 0;
}