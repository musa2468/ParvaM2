#include <iostream>
using namespace std;

class Item
{
    public:
        int quant;
        float price;
        Item (int q = 0, float p = 0.0f) : quant(q), price(p){}

        Item operator+(const Item &ot)
        {
            return Item (quant + ot.quant, price + ot.price);
        }

        bool operator==(const Item &ot)
        {
            return (quant == ot.quant && price == ot.price);
        }

        friend ostream &operator <<(ostream &os, const Item &it)
        {
            os << "Item -> Quantity : "<< it.quant << ", Price : $"<< it.price;
            return os;
        }
};

int main()
{
    Item i1(10, 250.5), i2(5, 100.25), i3(10, 250.5);

    Item T = i1 + i2;

    if (i1 == i3)
        cout <<"Item1 And Item3 Are Same In Quantity And Price. ";
    else
        cout<< "Not same";


    return 0;
}