#define _CRT_SECURE_NO_WARNINGS

#include <algorithm>
#include <cstdio>
#include <iostream>
#include <map>
#include <string>

using namespace std;

// Preprocessed in the initialization method
int bissextile_month_ps_arr[13] = { 0, 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30 };
int normal_month_ps_arr[13] = { 0, 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30 };
int* current_month_ps_arr = nullptr;

static inline bool check_bissextile(int a)
{
    return a % 4 == 0 && a % 100 != 0 || a % 400 == 0;
}

static inline int get_day_of_year(int mon, int day)
{
    return current_month_ps_arr[mon] + day;
}

int main(int argc, char const* argv[])
{
    // preprocessing the prefix sums
    for (int i = 1; i <= 12; ++i)
    {
        bissextile_month_ps_arr[i] = bissextile_month_ps_arr[i - 1] + bissextile_month_ps_arr[i];
        normal_month_ps_arr[i] = normal_month_ps_arr[i - 1] + normal_month_ps_arr[i];
    }

    int year = 0, month = 0, day = 0;
    while (scanf("%d/%d/%d", &year, &month, &day) != EOF)
    {
        if (check_bissextile(year))
        {
            current_month_ps_arr = bissextile_month_ps_arr;
        }
        else
        {
            current_month_ps_arr = normal_month_ps_arr;
        }

        printf("%d\n", get_day_of_year(month, day));
    }
    return 0;
}
