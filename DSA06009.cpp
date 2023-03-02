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
        int cnt = 0;
        for (auto &x : arr)
            cin >> x;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] + arr[j] == k)
                {
                    cnt++;
                }
            }
        }
        cout << cnt << endl;
        /* code */
    }
}