#include <iostream>
using namespace std;

class time
{
private:
    int hours, minutes, seconds;

public:
    time();
    time(int a, int b, int c)
    {
        hours = a;
        minutes = b;
        seconds = c;
    }
    void display(void)
    {
        cout << "The time is = " << hours << ":" << minutes << ":" << seconds << endl;
    }
    void timeInSeconds(void)
    {
        cout << "Time in seconds: " << (hours * 60 * 60) + (minutes * 60) + seconds << endl;
    }
};

int main()
{
    int h, m, s;
    cout << "Enter time:" << endl;
    cin >> h >> m >> s;
    time a(h, m, s);
    a.display();
    a.timeInSeconds();
    return 0;
}
