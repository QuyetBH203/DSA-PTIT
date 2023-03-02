#include <bits/stdc++.h>
using namespace std;

vector<bool> visited;
vector<vector<int>> arr;
vector<int> parent;
int V, E;

void DFS(int u)
{
    visited[u] = true;
    for (int v : arr[u])
    {
        if (!visited[v])
        {
            parent[v] = u;
            DFS(v);
        }
    }
}
void tranfer(int E)
{
    while (E--)
    {
        int x, y;
        cin >> x >> y;
        arr[x].push_back(y);
        arr[y].push_back(x);
    }
}
void connectComponent(int s, int t)
{
    parent.clear();
    parent.resize(V + 1, -1);
    visited.clear();
    visited.resize(V + 1, false);
    DFS(s);
    if (!visited[t])
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> V >> E;
        arr.clear();
        arr.resize(V + 1);
        tranfer(E);
        int q;
        cin >> q;
        while (q--)
        {
            int s, t;
            cin >> s >> t;
            connectComponent(s, t);
        }
    }
    return 0;
}