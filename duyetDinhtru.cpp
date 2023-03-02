#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> arr;
vector<bool> visited;
int n;

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
int connectedComponent()
{
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            cnt++;
            DFS(i);
        }
    }
    return cnt;
}
void solve()
{
    cin >> n;
    int a[100][100];
    arr.clear();
    arr.resize(n + 1);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 1)
            {
                arr[i].push_back(j);
            }
        }
    }
    visited.clear();
    visited.resize(n + 1, false);
    int count = connectedComponent();
    for (int i = 1; i <= n; i++)
    {
        visited.clear();
        visited.resize(n + 1, false);
        visited[i] = true; // loai dinh i ra
        if (count < connectedComponent())
        {
            cout << i << " ";
        }
    }
    cout << endl;
}
int main()
{
    int t = 2;
    while (t--)
    {
        solve();
    }
    return 0;
}