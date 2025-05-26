#include<iostream>
using namespace std;

class Clock {
public:
    int hours, minutes, seconds;

    void setTime(int h, int m, int s) {
        hours = h;
        minutes = m;
        seconds = s;
    }

    void showTime() {
        cout << "Current Time: " << hours << ":" << minutes << ":" << seconds << endl;
    }
};

int main() {
    Clock c;
    c.setTime(9, 56, 00);
    c.showTime();
    return 0;
}