#include <algorithm>
#include <cstdio>
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

double seq(int n)
{
    if(n==1)
        return 1;

    int sgn = (n % 2) ? 1 : -1;
    return double(sgn) * double(1) / double(n);
}

int main(int argc, char const *argv[])
{
    int q = 0;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int n = 0;
        cin >> n;
        double sum = 0;
        for (int j = 1; j <= n; j++)
        {
            sum += seq(j);
        }
        cout << fixed << setprecision(2) << sum << endl;
    }
    return 0;
}
