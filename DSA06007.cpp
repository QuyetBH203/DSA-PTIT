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
        int arr[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            b[i] = arr[i];
        }
        sort(arr, arr + n);
        int i = 0;
        while (arr[i] == b[i])
        {
            i++;
            /* code */
        }
        int j = n - 1;
        while (arr[j] == b[j])
        {
            j--;
            /* code */
        }
        cout << i + 1 << " " << j + 1 << endl;

        /* code */
    }
}