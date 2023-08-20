#include <bits/stdc++.h>
using namespace std;
void merge(int a[], int left, int mid, int right)
{
    int leftsize = mid - left + 1;
    int rightsize = right - mid;
    int L[leftsize];
    int R[rightsize];

    int k = 0;
    for (int i = left; i <= mid; i++)
    {
        L[k] = a[i];
        k++;
    }
    for (int i = 0; i < leftsize; i++)
    {
        cout << L[i] << " ";
    }
    cout << endl;
    k = 0;
    for (int i = mid + 1; i <= right; i++)
    {
        R[k] = a[i];
        k++;
    }

    for (int i = 0; i < rightsize; i++)
    {
        cout << R[i] << " ";
    }
    cout << endl;
    int i = 0, j = 0;
    int current = left;

    while (i < leftsize && j < rightsize)
    {
        if (L[i] <= R[j])
        {
            a[current] = L[i];
            current++;
            i++;
        }
        else
        {
            a[current] = R[j];
            current++;
            j++;
        }
    }

    while (i < leftsize)
    {
        a[current] = L[i];
        current++;
        i++;
    }
    while (j < rightsize)
    {
        a[current] = R[j];
        current++;
        j++;
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

    merge(a, 0, 2, size - 1);
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}