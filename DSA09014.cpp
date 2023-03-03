#include <bits/stdc++.h>
// kiem tra xem co canh nguoc hay khong
using namespace std;
int V, E;
vector<vector<int>> arr;
vector<bool> visited;
vector<int> parent;
bool DFS(int u)
{
    visited[u] = true;
    for (int v : arr[u])
    {
        if (!visited[v])
        {
            parent[v] = u;
            if (DFS(v))
            {
                return true;
            }
        }
        else if (v != parent[u])
        {
            return true;
        }
    }
    return false;
}
void solve()
{
    cin >> V >> E;
    arr.clear();
    arr.resize(1001);
    visited.clear();
    visited.resize(1001, 0);
    parent.clear();
    parent.resize(1001, 0);
    while (E--)
    {
        int x, y;
        cin >> x >> y;
        arr[x].push_back(y);
        arr[y].push_back(x);
    }
    for (int i = 1; i <= V; i++)
    {
        if (!visited[i])
        {
            if (DFS(i))
            {
                cout << "YES";
                return;
            }
        }
    }
    cout << "NO";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << endl;
    }
}