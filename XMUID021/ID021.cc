#define _CRT_SECURE_NO_WARNINGS

#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <string>

using namespace std;

int heights[110] = {};

int main(int argc, const char** argv)
{
	int x = 0;
	scanf("%d", &x);
	while (x != 0)
	{
		memset(heights, 0, sizeof(heights));
		unsigned long long sum = 0;

		for (int i = 0; i < x; i++)
		{
			scanf("%d", heights + i);
			sum += heights[i];
		}

		unsigned long long target = sum / x;

		unsigned long long mov = 0;

		for (int i = 0; i < x; i++)
		{
			long long diff = target - ((long long)heights[i]);
			mov += (diff >= 0 ? diff : 0);
		}

		printf("%lld\n\n", mov);

		scanf("%d", &x);
	}
	return 0;
}