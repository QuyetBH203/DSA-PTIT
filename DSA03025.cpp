#include <bits/stdc++.h>
#define ll long long

using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.second < b.second;
}
void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }
    int cnt = 1;
    sort(v.begin(), v.end(), cmp);
    int start = v[0].second;
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i].first >= start)
        {
            start = v[i].second;
            cnt++;
        }
    }
    cout << cnt << endl;
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