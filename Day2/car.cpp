#include <iostream>
using namespace std;

class car
{
    public:
        string brand;
        string model;

        void brk()
        {


        }
        void start()
        {
            cout <<brand <<model<<" car Is Started!!"<<endl;
        }
        void stop()
        {
            cout << brand <<model<< " Is Coming to halt...\n\n"<<endl;
        }
        void horn();
        
};
void car::horn()
    {
        cout <<endl<<"Peep Peep...!!!"<<endl;
    }


int main()
{
    car c1,c2;
    c1.brand ="Toyota ";
    c1.model="Supra";
    c2.brand="Honda ";
    c2.model="Civic";
    c1.start();
    c1.horn();
    c1.stop();
    c2.start();
    c2.horn();
    c2.stop();



    return 0;
}