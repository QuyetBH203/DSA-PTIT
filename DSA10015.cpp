#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;

int n, m;
int parent[1005];
int sz[1005];

struct edge
{
    int x, y, w;
};

vector<edge> E;

void ktao()
{
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        edge e{a, b, c};
        E.push_back(e);
    }
    for (int i = 1; i <= n; i++)
    {
        parent[i] = i;
        sz[i] = 1;
    }
}

int Find(int u)
{
    if (u == parent[u])
        return u;
    else
    {
        parent[u] = Find(parent[u]);
        return parent[u];
    }
}

bool Union(int u, int v)
{
    u = Find(u);
    v = Find(v);
    if (u == v)
        return false;
    if (sz[u] > sz[v])
    {
        sz[u] += sz[v];
        parent[v] = u;
    }
    else
    {
        sz[v] += sz[u];
        parent[u] = v;
    }
    return true;
}

bool cmp(edge a, edge b)
{
    return a.w < b.w;
}

void Kruskal()
{
    vector<edge> MST;
    int d = 0;
    sort(E.begin(), E.end(), cmp);
    for (edge e : E)
    {
        if (MST.size() == n - 1)
            break;
        if (Union(e.x, e.y))
        {
            MST.push_back(e);
            d += e.w;
        }
    }
    if (MST.size() == n - 1)
    {
        cout << d << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        E.clear();
        memset(parent, 0, sizeof(parent));
        memset(sz, 0, sizeof(sz));
        ktao();
        Kruskal();
    }
}