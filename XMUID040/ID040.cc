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
    string s{};
    while (cin >> s)
    {
        char cmax = 0;
        size_t slen = s.length();
        for (int i = 0; i < slen; i++)
        {
            cmax = max(cmax, s[i]);
        }

        size_t pos = s.find_first_of(cmax);
        while (pos != string::npos)
        {
            s.insert(pos, "(max)");
            pos = s.find(cmax,pos);
        }

        cout << s << endl;

        s = "";
    }
    return 0;
}
