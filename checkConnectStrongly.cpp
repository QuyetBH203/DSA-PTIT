#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> arr;
vector<bool> visited;
int V;
void DFS(int u)
{
    visited[u] = true;
    for (int v : arr[u])
    {
        if (!visited[v])
        {
            DFS(v);
        }
    }
}

bool checkConnectStrongly(int V)
{
    visited.clear();
    visited.resize(1001, false);
    for (int i = 1; i <= V; i++)
    {
        visited.clear();
        visited.resize(1001, false);
        DFS(i);
        for (int j = 1; j <= V; j++)
        {
            if (!visited[j])
            {
                return false;
            }
        }
    }
    return true;
}
void solve()
{
    cin >> V;
    int a[100][100];
    arr.clear();
    arr.resize(1001);
    for (int i = 1; i <= V; i++)
    {
        for (int j = 1; j <= V; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 1)
            {
                arr[i].push_back(j);
            }
        }
    }
    if (checkConnectStrongly(V) == true)
    {
        cout << "strongly connected";
    }
    else
    {
        cout << "not strongly connected";
    }
    cout << endl;
}
int main()
{
    int t = 2;
    while (t--)
    {
        solve();
        /* code */
    }
}
