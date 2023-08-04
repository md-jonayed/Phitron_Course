#include <bits/stdc++.h>
using namespace std;
int findFrequency(int arr[], int size, int k)
{
    int l = 0;
    int r = size - 1;
    int mid;
    while (l != r)
    {
        mid = (l + r) / 2;
        if (arr[mid] == k)
        {
            return 1;
        }
        else if (k < arr[mid])
        {
            r = mid - 1;
        }
        else if (k > arr[mid])
        {
            l = mid + 1;
        }
    }
    return 0;
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
    int count = 0;
    int k;
    cin >> k;
    count = count + findFrequency(arr, size, k);
    count = count + findFrequency(arr, size, k);
    if (count > 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}