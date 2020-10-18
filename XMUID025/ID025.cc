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
        double u = 0, v = 0, w = 0, l = 0;
        cin >> u >> v >> w >> l;
        double t = l / (u + v);
        cout << fixed << setprecision(3) << t*w << endl;
    }
    return 0;
}
