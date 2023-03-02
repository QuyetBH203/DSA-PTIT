#include <bits/stdc++.h>

using namespace std;
int V, E, u;
bool visited[1001];

void DFS(int u, vector<int> arr[], int V)
{
    cout << u << " ";
    visited[u] = true; // danh dau la dinh u da duoc tham
    for (int v : arr[u])
    {
        if (!visited[v])
        {
            DFS(v, arr, V);
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> arr[1001];
        cin >> V >> E >> u;
        for (int i = 1; i <= E; i++)
        {
            int x, y;
            cin >> x >> y;
            arr[x].push_back(y);
            arr[y].push_back(x);
        }
        memset(visited, false, sizeof(visited));
        DFS(u, arr, V);
        cout << endl;
        /* code */
    }
}