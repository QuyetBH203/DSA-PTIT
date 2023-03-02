// Đỉnh trụ là khi loại bỏ đỉnh này và cạnh liên thuộc
// Làm tăng thành phần liên thông của đồ thị
#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> arr;
vector<bool> visited;
int V, E;

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
int connectComponent()
{

    int cnt = 0;
    for (int i = 1; i <= V; i++)
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
    cin >> V >> E;
    arr.clear();
    arr.resize(V + 1);
    visited.clear();
    visited.resize(V + 1, false);
    while (E--)
    {
        int x, y;
        cin >> x >> y;
        arr[x].push_back(y);
        arr[y].push_back(x);
    }
    int count = connectComponent();
    for (int i = 1; i <= V; i++)
    {
        visited.clear();
        visited.resize(V + 1, false);
        visited[i] = true; // loai bo dinh i ra khoi do thi
        // roi dem so thanh phan lien thong
        if (count < connectComponent())
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}