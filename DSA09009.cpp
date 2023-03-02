#include <bits/stdc++.h>
using namespace std;

vector<bool> visited;
vector<vector<int>> arr;
int V, E;

void BFS(int u)
{
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (int v : arr[u])
        {
            if (!visited[v])
            {
                q.push(v);
                visited[v] = true;
            }
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
void connectedComponent()
{
    int ans = 0;
    for (int i = 1; i <= V; i++)
    {
        if (!visited[i])
        {
            ans++;
            BFS(i);
        }
    }
    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> V >> E;
        arr.clear();
        arr.resize(1001);
        visited.clear();
        // 1 2 1 3 2 3 2 5 3 4 3 5 4 5 4 6 5 6
        tranfer(E);
        connectedComponent();

        /* code */
    }
}