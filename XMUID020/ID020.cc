#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char **argv)
{
    long long t = 0;
    cin >> t;
    for (long long i = 0; i < t; i++)
    {
        int h = 0, m = 0, s = 0;
        cin >> h >> m >> s;

        h%=12;

        double rh = double(h) + double(m) / 60.0 + double(s) / 3600.0;
        double rm = double(m) + double(s) / 60.0;

        double rhdeg = (rh / 12.00) * 360.00;
        double rmdeg = (rm / 60.00) * 360.00;

        cout << ((int)floor(min(fabs(rhdeg - rmdeg), fabs(360.00 - fabs(rhdeg - rmdeg))))) << endl;
    }

    return 0;
}