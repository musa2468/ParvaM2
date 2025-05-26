#include <iostream>
using namespace std;
class book
{
    public:
    string title;
    string author;

    void dis();
    void get();
};
void book::dis()
{
    cout<<"Title : "<<title<<endl<<" Author : "<<author<<endl;
}
void book::get()
{
    cout<<"Enter The Title : ";
    cin>>title;
    cout<<"Enter The Author : ";
    cin>>author;

}
int main()
{
    book b1;
    b1.get();
    b1.dis();
    return 0;
}