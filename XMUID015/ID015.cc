#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iomanip>
#include <iostream>

using namespace std;

int points[200] = {0};

int main(int argc, char const *argv[])
{
    while (true)
    {
        memset(points, 0, sizeof(points));

        int n = 0;
        if (scanf("%d", &n) == EOF)
        {
            break;
        }

        int sum = 0, imax = -1, imin = 0x7fffffff;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", points + i);
            sum += points[i];
            imax = max(imax, points[i]);
            imin = min(imin, points[i]);
        }

        sum -= imax;
        sum -= imin;

        cout << fixed << setprecision(2) << double(sum) / double(n - 2) << endl;
    }
    return 0;
}
