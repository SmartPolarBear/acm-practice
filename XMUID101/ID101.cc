#include <iostream>
#include <queue>
#include <vector>
#include <climits>

using namespace std;

enum { NODE_MAX = 110, DIST_MAX_MAGIC = INT_MAX - 1204 };

struct node { int u, v, l, b; };

vector<node> g[NODE_MAX]{};

bool vis[NODE_MAX] = { false };

int min_dist = DIST_MAX_MAGIC;

void dfs(int n, int t, int dist, int bleft)
{
	if (bleft < 0)
	{
		return;
	}


	if (n == t)
	{
		min_dist = min(min_dist, dist);
		return;
	}

	if (dist >= min_dist)
	{
		return;
	}

	size_t gsize = g[n].size();
	for (size_t i = 0; i < gsize; i++)
	{
		node nd = g[n][i];
		if (!vis[nd.v])
		{
			vis[nd.v] = true;
			dfs(nd.v, t, dist + nd.l, bleft - nd.b);
			vis[nd.v] = false;
		}
	}
}

int main()
{
	int b = 0, n = 0, r = 0;
	cin >> b >> n >> r;
	for (int i = 0; i < r; i++)
	{
		int u = 0, v = 0, l = 0, b = 0;
		cin >> u >> v >> l >> b;

		g[u].push_back(node{ u,v,l,b });
		//g[v].push_back(node{ v,u,l,b });
	}

	dfs(1, n, 0, b);


	if (min_dist == DIST_MAX_MAGIC)
	{
		cout << -1 << endl;
	}
	else
	{
		cout << min_dist << endl;
	}

	return 0;
}