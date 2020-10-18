#include <algorithm>
#include <cmath>
#include <cstdint>
#include <iomanip>
#include <iostream>
#include <map>
#include <string>

using namespace std;

map<int, int> cmap;

int main(int argc, char const *argv[])
{
    int n = 0, num = 0;
    while (cin >> num)
    {
        cmap[num]++;
        n++;
    }

    for (map<int, int>::iterator iter = cmap.begin();
         iter != cmap.end();
         iter++)
    {
        if(iter->second>=(int)floor(n/2.0))
        {
            cout << iter->first << endl;
        }
    }
    return 0;
}
