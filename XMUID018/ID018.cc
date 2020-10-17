#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;


struct point
{
    int x, y;
};

bool operator<(const point& p1, const point& p2)
{
    if((p1.x + p1.y) != (p2.x + p2.y))
    {
        return (p1.x + p1.y) < (p2.x + p2.y);
    }
    else
    {
        return p1.x < p2.x;
    }
}

bool operator>(const point& p1, const point& p2)
{
    if ((p1.x + p1.y) != (p2.x + p2.y))
    {
        return (p1.x + p1.y) > (p2.x + p2.y);
    }
    else
    {
        return p1.x > p2.x;
    }
}


bool operator==(const point& p1, const point& p2)
{
    return (p1.x == p2.x) && (p1.y == p2.y);
}

bool operator!=(const point& p1, const point& p2)
{
    return !(p1 == p2);
}


static inline double dist(const point& p1, const point& p2)
{
    return sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
}


int main(int argc, char const* argv[])
{
    int n = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        point p1, p2;
        cin >> p1.x >> p1.y >> p2.x >> p2.y;

        point sp = max(p1, p2);
        point ep = min(p1, p2);

        point p = sp;
        double dis = 0;
        while (p != ep)
        {
            if (p.x != 0)
            {
                p = point{ p.x - 1, p.y + 1 };
                dis += sqrt(2);
            }
            else
            {
                point np = point{ p.y - 1, 0 };
                dis += dist(np, p);
                p = np;
            }
        }

        cout << fixed << setprecision(3) << dis << endl;
    }
    return 0;
}
