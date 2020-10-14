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
        int n = 0, po = 0, ng = 0, eq = 0;
        if (scanf("%d", &n) == EOF)
        {
            break;
        }
        if(n==0)
            break;
        for (int i = 0; i < n; i++)
        {
            double bn = 0;
            scanf("%lf", &bn);

            if (bn > 0)
                po++;
            else if (bn == 0)
                eq++;
            else
                ng++;
        }
        printf("%d %d %d\n", ng, eq, po);
    }
    return 0;
}
