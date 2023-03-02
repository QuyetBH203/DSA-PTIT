#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    queue<string> q;
    q.push("1");
    while (1)
    {
        string st = q.front();
        if (stoll(st) % n == 0)
            break;
        q.pop();
        q.push(st + "0");
        q.push(st + "1");
    }
    cout << q.front() << endl;
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