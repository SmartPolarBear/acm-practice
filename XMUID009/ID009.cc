#include <algorithm>
#include <cstdio>
#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    int a = 0, b = 0;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        int sq = 0, cb = 0;
        for (int i = a; i <= b;i++)
        {
            if(i%2)
            {
                cb += i * i * i;
            }
            else
            {
                sq += i * i;
            }
        }
        printf("%d %d\n", sq, cb);
    }
    return 0;
}
