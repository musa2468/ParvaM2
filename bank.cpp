#include <iostream>
using namespace std;

class bank
{
    private:
        int bal;

    public:
        void setbal(int b)
        {
            bal = b;
        }
        int getbal()
        {
            return bal;
        }


};

int main()
{
    bank a1;
    a1.setbal(25000);
    cout <<"Balance: "<<a1.getbal() << endl;


    return 0;
}