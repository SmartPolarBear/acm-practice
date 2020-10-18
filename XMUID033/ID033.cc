#include <algorithm>
#include <cmath>
#include <string>
#include <iomanip>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string num;
        cin >> num;
        int short_num = 6;
        for (int i = 6; i <11; i++)
        {
            short_num = short_num * 10 + (num[i] - '0');
        }
        cout << short_num << endl;
    }
    return 0;
}
