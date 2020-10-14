#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iomanip>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    while (true)
    {
        int n = 0;
        if (!(cin >> n))
        {
            break;
        }

        long double sum = 0, imax = -0x7fffffff, imin = 0x7fffffff;
        for (int i = 0; i < n; i++)
        {
            long double num = 0;
            cin >> num;
            sum += num;
            imax = max(imax, num);
            imin = min(imin, num);
        }

        sum -= imax;
        sum -= imin;

        cout << fixed << setprecision(2) << ((long double)(sum)) / ((long double)(n - 2)) << endl;
    }
    return 0;
}
