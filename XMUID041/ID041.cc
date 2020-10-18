#include <algorithm>
#include <cmath>
#include <cstdint>
#include <iomanip>
#include <iostream>
#include <map>
#include <string>

using namespace std;
map<char, uint64_t> countmap;


int main(int argc, char const *argv[])
{
    int n = 0;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        string line;
        getline(cin, line);

        uint64_t len = line.length();
        for (uint64_t j = 0; j < len; j++)
        {
            countmap[line[j]]++;
        }

        cout << "a:" << countmap['a'] << endl;
        cout << "e:" << countmap['e'] << endl;
        cout << "i:" << countmap['i'] << endl;
        cout << "o:" << countmap['o'] << endl;
        cout << "u:" << countmap['u'];
        if (i != n - 1)
            cout << endl << endl;

        countmap.clear();
    }
    return 0;
}
