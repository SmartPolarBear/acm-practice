#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    int n = 0, m = 0;
    while (scanf("%d%d", &n, &m) != EOF)
    {
        double sum = double(n);
        double tn = double(n);
        for (int i = 1; i < m; i++)
            sum += (tn = sqrt(tn));
        cout << fixed << setprecision(2) << sum << endl;
    }
    return 0;
}
