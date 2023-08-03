#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int left, int right, int mid)
{
    int lSize = (mid - left + 1);
    int rSize = (right - mid);
    int l[lSize];
    int r[rSize];

    for (int i = left, j = 0; i <= mid; i++, j++)
    {
        l[j] = arr[i];
    }
    for (int i = mid + 1, j = 0; i <= right; i++, j++)
    {
        r[j] = arr[i];
    }

    int lp = 0;
    int rp = 0;

    for (int i = left; i <= right; i++)
    {
        if (lp < lSize && (rp >= rSize || l[lp] <= r[rp]))
        {
            arr[i] = l[lp];
            lp++;
        }
        else
        {
            arr[i] = r[rp];
            rp++;
        }
    }
}

void mergeSort(int arr[], int left, int right)
{
    if (left >= right)
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
    int arraySize;
    cin >> arraySize;
    int arr[arraySize];
    for (int i = 0; i < arraySize; i++)
    {
        cin >> arr[i];
    }
    int left = 0;
    int right = arraySize - 1;
    mergeSort(arr, left, right);

    cout << "Sorted array: ";
    for (int i = 0; i < arraySize; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
