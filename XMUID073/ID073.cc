#include <algorithm>
#include <cmath>
#include <cstdint>
#include <iomanip>
#include <iostream>
#include <stack>
#include <string>

using namespace std;

stack<double> s1;
stack<string> s2;

int main(int argc, char const *argv[])
{
    string item = "";
    while (cin >> item)
    {
        s2.push(item);
    }

    while (!s2.empty())
    {
        string t = s2.top();
        s2.pop();

        if (isdigit(t[0]))
        {
            s1.push(atof(t.c_str()));
        }
        else
        {
            double o1 = s1.top();
            s1.pop();
            double o2 = s1.top();
            s1.pop();

            switch (t[0])
            {
            default:
            case '+':
                s1.push(o1 + o2);

                break;
            case '-':
                s1.push(o1 - o2);

                break;
            case '*':
                s1.push(o1 * o2);

                break;
            case '/':
                s1.push(o1 / o2);

                break;
            }
        }
    }

    cout << fixed << setprecision(6) << s1.top() << endl;
    return 0;
}
