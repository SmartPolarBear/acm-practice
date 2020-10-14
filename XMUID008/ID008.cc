#include <algorithm>
#include <cstdio>
#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    while (true)
    {
        int m = 0, sum = 1;
        if (scanf("%d", &m) == EOF)
        {
            break;
        }
        for (int i = 0; i < m; i++)
        {
            int n = 0;
            scanf("%d", &n);

            if (n % 2)
            {
                sum *= n;
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}
