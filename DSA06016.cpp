#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        for (auto &x : a)
            cin >> x;
        for (auto &y : b)
            cin >> y;
        sort(a, a + n);
        sort(b, b + n);
        cout << (long long)a[n - 1] * b[0] << endl;
        /* code */
    }
}