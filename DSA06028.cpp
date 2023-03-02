#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> V;

void sap_xep_chon(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min_idx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }
        swap(arr[min_idx], arr[i]);
        vector<int> a(arr, arr + n);
        V.push_back(a);
    }
    V.reserve(V.size());
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (auto &x : arr)
    {
        cin >> x;
    }
    sap_xep_chon(arr, n);
    for (int i = V.size() - 1; i >= 0; i--)
    {
        cout << "Buoc " << i + 1 << ": ";
        for (auto it : V[i])
        {
            cout << it << " ";
        }
        cout << endl;
    }
    return 0;
}