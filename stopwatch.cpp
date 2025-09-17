#include <iostream>
#include <thread>
#include <chrono>
using namespace std;
using namespace std::chrono;
using namespace std::this_thread;

int main()
{   
    int s = 0, m = 0, h = 0;
    while (s != -1)
    {   cout<<"STOPWATCH"<<endl<<flush;
        cout <<h <<":"<<m <<":"<< s << flush;
        s++;
        seconds t = seconds(1);
        if (s == 60)
        {
            s = 0;
            m += 1;
        }
        if (m == 60)
        {
            m = 0;
            h += 1;
        }
        if (h == 24)
        {
            h = 0;
        }

        sleep_for(t);
        system("cls");
    }
}
