#include <bits/stdc++.h>
using namespace std;
void merge(int arr[], int left, int right, int mid)
{
    int leftSize = mid - left + 1;
    int rightSize = right - mid;
    int l[leftSize];
    int r[rightSize];
    for (int i = 0; i < leftSize; i++)
    {
        l[i] = arr[left + i];
    }
    for (int i = 0; i < rightSize; i++)
    {
        r[i] = arr[mid + 1 + i];
    }
    int lp = 0, rp = 0, k = left;
    while (lp < leftSize && rp < rightSize)
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
    while (lp < leftSize)
    {
        arr[k] = l[lp];
        lp++;
        k++;
    }
    while (rp < rightSize)
    {
        arr[k] = r[rp];
        rp++;
        k++;
    }
}
void mergeSort(int arr[], int left, int right)
{
    if (left == right)
    {
        return;
    }
    int mid = (left + right) / 2;
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);
    merge(arr, left, right, mid);
}
int main()
{
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int left = 0;
    int right = size - 1;
    mergeSort(arr, left, right);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}