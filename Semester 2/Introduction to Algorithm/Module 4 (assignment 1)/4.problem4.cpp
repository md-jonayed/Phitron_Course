#include <bits/stdc++.h>
using namespace std;
void merge(int l[], int r[], int size1, int size2)
{
    int n = size1 + size2;
    int arr[n];
    int lp = 0, rp = 0, k = 0;
    while (lp < size1 && rp < size2)
    {
        if (l[lp] >= r[rp])
        {
            arr[k] = l[lp];
            lp++;
            k++;
        }
        else
        {
            arr[k] = r[rp];
            rp++;
            k++;
        }
    }

    while (lp < size1)
    {
        arr[k] = l[lp];
        lp++;
        k++;
    }
    while (rp < size2)
    {
        arr[k] = r[rp];
        rp++;
        k++;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int size1;
    cin >> size1;
    int l[size1];
    for (int i = 0; i < size1; i++)
    {
        cin >> l[i];
    }
    int size2;
    cin >> size2;
    int r[size2];
    for (int i = 0; i < size2; i++)
    {
        cin >> r[i];
    }
    merge(l, r, size1, size2);
    return 0;
}