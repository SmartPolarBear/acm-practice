#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <map>

using namespace std;

map<double, double> lmap{
    {59, 0},
    {63, 1},
    {67, 1.7},
    {71, 2.0},
    {74, 2.3},
    {77, 2.7},
    {80, 3.0},
    {84, 3.3},
    {89, 3.7},
    {90, 4.0},
};

using namespace std;

int main(int argc, const char **argv)
{
    int n = 0;
    cin >> n;

    long double total_wsum = 0, total_weight = 0;
    for (size_t i = 0; i < n; i++)
    {
        long double num = 0, weight = 0;
        cin >> num >> weight;

        total_wsum += lmap.lower_bound(num)->second * weight;
        total_weight += weight;
    }

    cout << fixed << setprecision(4) << (total_wsum / total_weight) << endl;

    return 0;
}