#include <algorithm>
#include <cmath>
#include <cstdint>
#include <iomanip>
#include <iostream>
#include <map>
#include <string>

using namespace std;

const string true_str = "true\n";
const string false_str = "false\n";

int main(int argc, char const *argv[])
{
    int n = 0;
    while (cin >> n)
    {
        if (n == 1)
        {
            cout << true_str;
        }
        else if (n <= 0)
        {
            cout << false_str;
        }
        else
        {
            while ((n % 2) == 0)
                n /= 2;

            while ((n % 3) == 0)
                n /= 3;

            while ((n % 5) == 0)
                n /= 5;

            
            cout << (n == 1 ? true_str : false_str);
        }
    }
    return 0;
}
