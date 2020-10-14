#include <algorithm>
#include <cstdio>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int solve(int day)
{
    int d = 1;
    for (int i = 1; i < day; i++)
    {
        d = 2 * (d + 1);
    }
    return d;
}

int main(int argc, char const *argv[])
{
    int n = 0;
    while (cin >> n)
    {
        cout << solve(n) << endl;
    }
    return 0;
}
