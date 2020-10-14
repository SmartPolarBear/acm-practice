#include <algorithm>
#include <cstdio>
#include <iostream>
#include <map>
#include <string>

using namespace std;

long long gcd(long long a, long long b)
{
    return b == 0 ? a : gcd(b, a % b);
}

int main(int argc, const char **argv)
{
    int n = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        long long a = 0, b = 0;
        cin >> a >> b;
        cout << gcd(a, b) << endl;
    }

    return 0;
}