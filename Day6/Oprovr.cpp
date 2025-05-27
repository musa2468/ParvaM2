#include <iostream>
using namespace std;

class Dist
{
    public:
        int mtr;
        Dist(int m = 0)
        {
            mtr = m;
        }

        Dist operator+(const Dist &d)
        {
            return Dist(mtr +  d.mtr);
        }

        void Dis()
        {
            cout <<"Distance = "<<mtr<<"m";
        }

};

int main()
{
    Dist d1(10),d2(25);
    Dist d3 = d1 +d2;
    d3.Dis();


    return 0;
}