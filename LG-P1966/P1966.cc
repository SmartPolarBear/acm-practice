#define _CRT_SECURE_NO_WARNINGS

#include <algorithm>
#include <cstdio>
#include <iostream>
#include <utility>

using namespace std;

struct int_pair
{
    int first, second;
};

bool operator<(const int_pair &l, const int_pair &r)
{
    return l.first < r.first;
}

constexpr unsigned long long MOD = 100000000 - 3;
constexpr size_t DSIZE = 100010;

int_pair ha[DSIZE] = {}, hb[DSIZE] = {};
int hmap[DSIZE] = {0}, hmap_buf[DSIZE] = {0};

unsigned long long rev_cnt = 0;

void merge(int arr[], int l1, int r1, int l2, int r2)
{
    int p1 = l1, p2 = l2, p = l1;
    while (p1 <= r1 && p2 <= r2)
    {
        if (hmap[p1] <= hmap[p2])
        {
            hmap_buf[p++] = hmap[p1++];
        }
        else
        {
            rev_cnt += r1 - p1 + 1;
            hmap_buf[p++] = hmap[p2++];
        }
    }

    while (p1 <= r1)
    {
        hmap_buf[p++] = hmap[p1++];
    }

    while (p2 <= r2)
    {
        hmap_buf[p++] = hmap[p2++];
    }

    for (int i = l1; i <= r2; i++)
    {
        hmap[i] = hmap_buf[i];
    }
}

void merge_sort(int arr[], int l, int r)
{
    if (l >= r)
        return;

    int mid = (l + r) / 2;

    merge_sort(arr, l, mid);
    merge_sort(arr, mid + 1, r);

    merge(arr, l, mid, mid + 1, r);
}

static inline int fast_read_int()
{
    int x = 0, w = 1;
    char ch = 0;
    while (ch < '0' || ch > '9')
    {
        if (ch == '-')
            w = -1;
        ch = getchar();
    }
    while (ch >= '0' && ch <= '9')
    {
        x = x * 10 + (ch - '0');
        ch = getchar();
    }
    return x * w;
}

static inline void fast_write(int x)
{
    static int sta[35];
    int top = 0;
    do
    {
        sta[top++] = x % 10, x /= 10;
    } while (x);
    while (top)
    {
        putchar(sta[--top] + '0');
    }
}

int main()
{
    int n = fast_read_int();

    for (int i = 0; i < n; i++)
    {
        ha[i].first = fast_read_int();
        ha[i].second = i;
    }

    sort(ha, ha + n);

    for (int i = 0; i < n; i++)
    {
        hb[i].first = fast_read_int();
        hb[i].second = i;
    }

    sort(hb, hb + n);

    for (int i = 0; i < n; i++)
    {
        hmap[ha[i].second] = hb[i].second;
    }

    merge_sort(hmap, 0, n - 1);

    fast_write(rev_cnt % MOD);

    return 0;
}