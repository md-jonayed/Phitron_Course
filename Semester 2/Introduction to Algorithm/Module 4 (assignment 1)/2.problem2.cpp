#include <bits/stdc++.h>
using namespace std;
void binarySearch(int arr[], int size)
{
    int left = 0;
    int right = size - 1;
    int mid;
    int key;
    cin >> key;
    int flag = 0;
    while (left != right)
    {
        mid = (left + right) / 2;
        if (arr[mid] == key)
        {
            flag = 1;
            break;
        }
        else if (key < arr[mid])
        {
            right = mid - 1;
        }
        else if (key > arr[mid])
        {
            left = mid + 1;
        }
    }
    if (flag == 1)
    {
        cout << mid << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }
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
    binarySearch(arr, size);
    return 0;
}