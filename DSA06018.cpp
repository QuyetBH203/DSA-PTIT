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
        set<int> se;
        for (auto &x : arr)
        {
            cin >> x;
            se.insert(x);
        }
        vector<int> vt(se.begin(), se.end());
        sort(arr, arr + n);
        int m = (arr[n - 1] - arr[0]) + 1;
        cout << m - vt.size() << endl;

        /* code */
    }
}