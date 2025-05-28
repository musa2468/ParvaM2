#include <iostream>
using namespace std;

class Veh
{
    private:
        string m;
        int yr;

    public:
        Veh(string md, int y)
        {
            m = md;
            yr = y;
        }

        void show()
        {
            cout << "Model: "<<m<< " | Year: "<<yr<<endl;
        }
        
};

int main()
{
    Veh *v = new Veh("G M C", 2010), *v2 = new Veh ("Chevrolet", 2012);
    v->show();
    v2->show();

    delete v,v2;

    return 0;
}