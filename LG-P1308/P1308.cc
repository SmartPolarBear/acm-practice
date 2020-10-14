#define _CRT_SECURE_NO_WARNINGS

#include <algorithm>
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

constexpr size_t NMAX = 110;

struct node { int idx, out_deg, in_deg, ci, ui; };
struct edge { int u, v, w; };


int n = 0, p = 0;

vector<edge> g1[NMAX] = {}, g2[NMAX] = {};
node nodes[NMAX] = {};

void topsort()
{
	queue<node> q{};

	for (int i = 1; i <= n; i++)
	{
		if (nodes[i].in_deg == 0)
		{
			q.push(nodes[i]);
			for (auto& e : g2[nodes[i].idx])
			{
				nodes[e.v].in_deg--;
			}
			g2[nodes[i].idx].clear();
		}
	}

	size_t iter = 1;
	while (!q.empty())
	{
		nodes[iter++] = q.front();
		q.pop();
	}
}


int main(int argc, const char** argv)
{
	//freopen("P1038_2.in", "r", stdin);
	//freopen("my.out", "w", stdout);

	cin >> n >> p;
	for (int i = 1; i <= n; i++)
	{
		cin >> nodes[i].ci >> nodes[i].ui;
		nodes[i].idx = i;
	}

	for (int i = 0; i < p; i++)
	{
		int u = 0, v = 0, w = 0;
		cin >> u >> v >> w;

		g1[u].push_back(edge{ u,v,w });
		g2[u].push_back(edge{ u,v,w });

		nodes[u].out_deg++;
		nodes[v].in_deg++;
	}

	for (int i = 1; i <= n; i++)
	{
		if (nodes[i].in_deg > 0)
		{
			nodes[i].ci -= nodes[i].ui;
		}
	}

	topsort();

	for (int i = 1; i <= n; i++)
	{
		if (nodes[i].ci > 0)
		{
			for (auto& e : g1[i])
			{
				nodes[e.v].ci += nodes[i].ci * e.w;
			}
		}
	}

	bool empty = true;
	for (auto& node : nodes)
	{
		if (node.ci > 0 && node.out_deg == 0)
		{
			cout << node.idx << " " << node.ci << endl;
			empty = false;
		}
	}

	if (empty)
	{
		cout << "NULL" << endl;
	}

	return 0;
}