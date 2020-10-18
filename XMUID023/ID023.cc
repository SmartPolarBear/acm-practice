#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <string>

using namespace std;

map<char, int> cmap;

int main()
{
    int m = 0;
    cin >> m;
    while (m != 0)
    {
        char c = '\0';
        for (int i = 0; i < m; i++)
        {
            cin >> c;
            if (c != 'B' && c != 'L')
            {
                cmap[c]++;
            }
            else
            {
                break;
            }
        }

        if (c == 'B' && cmap['R'] == 7)
        {
            cout << "Red" << endl;
        }
        else if (c == 'B' && cmap['R'] != 7)
        {
            cout << "Yellow" << endl;
        }
        else if (c == 'L' && cmap['Y'] == 7)
        {
            cout << "Yellow" << endl;
        }
        else if (c == 'L' && cmap['Y'] != 7)
        {
            cout << "Red" << endl;
        }

        cin >> m;
    }
    return 0;
}