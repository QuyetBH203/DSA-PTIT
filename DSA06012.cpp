#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (auto &x : arr)
            cin >> x;
        sort(arr, arr + n);
        vector<int> vt;
        for (int i = n - 1; i >= n - k; i--)
        {
            vt.push_back(arr[i]);
        }
        for (auto it : vt)
        {
            cout << it << " ";
        }
        cout << endl;
        /* code */
    }
}