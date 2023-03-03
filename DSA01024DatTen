#include <bits/stdc++.h>

using namespace std;

int n, k;
int a[100];
vector<vector<int>> vt;

void out()
{
    vector<int> v;
    for (int i = 1; i <= k; i++)
    {
        v.push_back(a[i]);
    }
    vt.push_back(v);
}
void Try(int i)
{
    for (int j = a[i - 1] + 1; j <= n - k + i; j++)
    {
        a[i] = j;
        if (i == k)
        {
            out();
        }
        else
        {
            Try(i + 1);
        }
    }
}
int main()
{
    int m;
    cin >> m >> k;
    set<string> se;
    vector<string> u;
    while (m--)
    {
        string s;
        cin >> s;
        se.insert(s);
        /* code */
    }
    for (string t : se)
    {
        u.push_back(t);
    }
    n = u.size();

    Try(1);
    for (int i = 0; i < vt.size(); i++)
    {
        for (auto j : vt[i])
        {
            cout << u[j - 1] << " ";
        }
        cout << endl;
    }
    return 0;
}