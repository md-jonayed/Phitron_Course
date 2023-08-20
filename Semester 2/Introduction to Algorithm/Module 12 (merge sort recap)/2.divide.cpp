#include <bits/stdc++.h>
using namespace std;
void divide(int a[], int left, int right)
{
    for (int i = left; i <= right; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    if (left < right)
    {
        int mid = (left + right) / 2;
        divide(a, left, mid);
        divide(a, mid + 1, right);
    }
}
int main()
{
    int size;
    cin >> size;
    int a[size];
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    divide(a, 0, size - 1);
    return 0;
}