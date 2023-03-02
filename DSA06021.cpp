#include <bits/stdc++.h>

using namespace std;

int linearSearch(int arr[], int n, int k)
{
    int ans;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == k)
        {
            ans = i;
            break;
        }
    }
    return ans;
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
        cout << linearSearch(arr, n, k) + 1 << endl;
        /* code */
    }
}