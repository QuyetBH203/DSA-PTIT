#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (auto &x : arr)
            cin >> x;
        vector<int> vt;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                vt.push_back(arr[i] + arr[j]);
            }
        }
        int res = vt[0];
        for (int i = 1; i < vt.size(); i++)
        {
            if (abs(vt[i]) < abs(res))
            {
                res = vt[i];
            }
        }
        cout << res << endl;
    }
}