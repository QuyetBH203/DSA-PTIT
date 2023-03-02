#include <bits/stdc++.h>
#define Max 100

using namespace std;

int n, m, cnt;
int matrix[101][101];

bool mark[101][101];

void RoadOf(int i, int j)
{

    if (i > n || j > m || i <= 0 || j <= 0)
    {
        return;
    }
    if (i == n && j == m)
    {
        cnt++;
        return;
    }
    mark[i][j] = 1;
    RoadOf(i + 1, j);
    RoadOf(i, j + 1);
    // backtracking
    mark[i][j] = 0;
}

void solve()
{
    cin >> n >> m;
    cnt = 0;
    memset(mark, false, sizeof(mark));
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> matrix[i][j];
        }
    }
    RoadOf(1, 1);
    cout << cnt << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();

        /* code */
    }
}