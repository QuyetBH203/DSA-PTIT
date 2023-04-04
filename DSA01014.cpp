#include <bits/stdc++.h>

using namespace std;
int n, k, s;
long long cnt;
int a[100] = {};
bool sum_Element(int a[], int k)
{
    int sum = 0;
    for (int i = 1; i <= k; i++)
    {
        sum += a[i];
    }
    return (sum == s);
}
void Try(int i)
{
    for (int j = a[i - 1] + 1; j <= n - k + i; j++)
    {
        a[i] = j;
        if (i == k)
        {
            if (sum_Element(a, k))
            {
                cnt++;
            }
        }
        else
            Try(i + 1);
    }
}
int main()
{
    while (1)
    {
        cin >> n >> k >> s;
        if (n == 0 && k == 0 && s == 0)
            break;
        cnt = 0;
        Try(1);
        cout << cnt << endl;
    }
}