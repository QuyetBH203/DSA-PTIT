#include <bits/stdc++.h>

using namespace std;
void inpt(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void buble_Sort(int arr[], int n)
{
    bool check = false;
    for (int i = 0; i < n - 1; i++)
    {
        check = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                check = true;
            }
        }
        if (check == false)
        {
            break;
        }
        cout << "Buoc " << i + 1 << ": ";
        inpt(arr, n);
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (auto &x : arr)
        cin >> x;
    buble_Sort(arr, n);
}