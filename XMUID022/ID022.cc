#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int classes[110] = {0};

int main()
{
    int n = 0;
    while (scanf("%d", &n) != EOF)
    {
        memset(classes, 0, sizeof(int) * (n + 10));

        for (int i = 0; i < n; i++)
        {
            scanf("%d", classes + i);
        }

        sort(classes, classes + n);

        int target = n / 2 + 1, cnt = 0;
        for (int i = 0; i < target; i++)
        {
            cnt += (int)ceil(double(classes[i]) / 2.0);
        }

        printf("%d\n", cnt);
    }
    return 0;
}