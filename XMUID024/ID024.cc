#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iomanip>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        double x = 0, y = 0, m = 0, n = 0;
        cin >> x >> y >> m >> n;
        cout << fixed << setprecision(1) << sqrt(x * x + y * y + m * m + n * n - 2 * m * x - 2 * n * y) << endl;
    }
    return 0;
}
