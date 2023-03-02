#include <bits/stdc++.h>

using namespace std;

bool cmp(int a, int b)
{
    return a > b;
}
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
        sort(arr, arr + n, cmp);
        for (int i = 0; i < n / 2; i++)
        {
            cout << arr[i] << " " << arr[n - i - 1] << " ";
        }
        if (n % 2 != 0)
        {
            cout << arr[n / 2];
        }
        cout << endl;
        /* code */
    }
}