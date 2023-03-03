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
        int a[k + 1];
        for (int i = 1; i <= k; i++)
        {
            cin >> a[i];
        }
        int j = k;
        while (a[j] == n - k + j && j > 0)
        {
            j--;
        }
        if (j == 0)
        {
            for (int i = 1; i <= k; i++)
            {
               a[i]=i;
               cout << a[i] << " ";
            }
        }
        else
        {
            a[j]++;
            for (int m = j + 1; m <= k; m++)
            {
                a[m] = a[j] + m - j;
            }
            for (int i = 1; i <= k; i++)
            {
                cout << a[i] << " ";
            }
        }
        cout << endl;

        /* code */
    }
}