
#include <bits/stdc++.h>

using namespace std;

bool check(int arr[], int n, int k)
{
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            // use binary_search to check
            if (binary_search(arr + j + 1, arr + n, k - arr[i] - arr[j]))
                return true;
        }
    }
    return false;
}
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
        cout << (check(arr, n, k) ? "YES" : "NO") << endl;

        /* code */
    }
}