#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iomanip>
#include <iostream>

using namespace std;

int points[200] = {0};

int main(int argc, char const *argv[])
{
    unsigned long long a = 0, b = 0;
    while (cin >> hex >> a >> b)
    {
        cout << uppercase << hex << a + b << endl;
    }
    return 0;
}
