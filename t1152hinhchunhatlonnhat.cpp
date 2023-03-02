#include <bits/stdc++.h>

using namespace std;

void testCase()
{
    long long n;
    cin >> n;
    long long a[n];
    // khai bao mang lan luot la chieu cao cua cac cot trong bieu do

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // tao mot stack rong. Chua cac chi so
    stack<int> s;
    long long max_area = 0; // dien tich lon nhat bi che phu boi cac cot

    long long tp;            // gia tri dinh cua stack
    long long area_with_top; // dien tich ung voi gia tri dinh cua stack

    // xet tat ca cac cot

    int i = 0;
    while (i < n)
    {
        if (s.empty() || a[s.top()] <= a[i])
        {
            s.push(i);
            i++;
        }
        else
        {
            tp = s.top();
            s.pop();

            // tinh dien tich cot do nhu la nho nhat

            area_with_top = a[tp] * (s.empty() ? i : i - s.top() - 1);
            if (max_area < area_with_top)
            {
                max_area = area_with_top;
            }
        }
    }
    // xoa cac cot con lai ra khoi stack va tinh toan

    while (!s.empty())
    {
        tp = s.top();
        s.pop();
        area_with_top = a[tp] * (s.empty() ? i : i - s.top() - 1);
        if (max_area < area_with_top)
        {
            max_area = area_with_top;
        }
    }
    cout << max_area << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        testCase();
        /* code */
    }
}