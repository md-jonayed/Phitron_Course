#include <bits/stdc++.h>
using namespace std;
void merge(int a[], int left, int mid, int right)
{
    int leftsize = mid - left + 1;
    int rightsize = right - mid;
    int l[leftsize];
    int r[rightsize];
    int k = 0;
    for (int i = left; i <= mid; i++)
    {
        l[k] = a[i];
        k++;
    }
    k = 0;
    for (int i = mid + 1; i <= right; i++)
    {
        r[k] = a[i];
        k++;
    }
    int i = 0, j = 0;
    int current = left;
    while (i < leftsize && j < rightsize)
    {
        if (l[i] <= r[j])
        {
            a[current] = l[i];
            current++;
            i++;
        }
        else
        {
            a[current] = r[j];
            current++;
            j++;
        }
    }

    while (i < leftsize)
    {
        a[current] = l[i];
        current++;
        i++;
    }
    while (j < rightsize)
    {
        a[current] = r[j];
        current++;
        j++;
    }
}
void mergeSort(int a[], int left, int right)
{
    if (left < right)
    {
        int mid = (left + right) / 2;
        mergeSort(a, left, mid);
        mergeSort(a, mid + 1, right);
        merge(a, left, mid, right);
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
    mergeSort(a, 0, size - 1);
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}