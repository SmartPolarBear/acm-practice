#include <algorithm>
#include <cstdio>
#include <iostream>
#include <map>
#include <string>

using namespace std;

map<double, string> lmap{
    {60, "E:[0,60)"},
    {70, "D:[60,70)"},
    {80, "C:[70,80)"},
    {90, "B:[80,90)"},
    {100, "A:[90,100]"},
};

int main(int argc, const char **argv)
{
    double level = 0;
    map<double, string>::const_iterator iter;
    while (cin >> level)
    {
        if (level > 100.0 || level < 0.0)
        {
            cout << "Wrong Score!" << endl;
        }
        else if (level == 100.0)
        {
            cout << "A:[90,100]" << endl;
        }
        else
        {
            cout << (lmap.upper_bound(level))->second << endl;
        }
    }

    return 0;
}