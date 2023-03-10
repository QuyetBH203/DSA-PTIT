#include <iostream>
#define ll long long
using namespace std;

void solve()
{

    int n;
    cin >> n;
    ll a[55];
    a[1] = 1, a[2] = 2, a[3] = 4;
    for (int i = 4; i <= 50; i++)
    {
        a[i] = a[i - 3] + a[i - 2] + a[i - 1];
    }
    cout << a[n] << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}