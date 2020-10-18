#include <algorithm>
#include <cmath>
#include <cstdint>
#include <iomanip>
#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    int n = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string num{};
        int k = 0;
        cin >> num >> k;

        size_t dot = num.find_first_of('.');

        cout << num[dot+k] << endl;
    }
    return 0;
}
