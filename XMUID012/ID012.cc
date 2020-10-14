#define _CRT_SECURE_NO_WARNINGS

#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iomanip>
#include <iostream>

using namespace std;

bool mark[10010] = { 0 };

int main(int argc, char const* argv[])
{
    for (int i = 100; i < 1000; i++)
    {
        int a = i % 10, b = (i % 100) / 10, c = i / 100;
        if ((a * a * a + b * b * b + c * c * c) == i)
            mark[i] = true;
    }

    int n = 0, m = 0;
    while (scanf("%d%d", &m, &n) != EOF)
    {
        int count = 0;
        bool first = true;
        for (int i = m; i <= n; i++)
        {
            if (mark[i])
            {
                printf(first?"%d":" %d", i);
                if (first)first = false;
                count++;
            }
        }
        if (count == 0)printf("no\n");
        else printf("\n");
    }
    return 0;
}
