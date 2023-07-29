#include <bits/stdc++.h>
void insertHeap(vector<int> &v, int x)
{
    v.push_back(x);
    int currentIndex = v.size() - 1;
    while (currentIndex != 0)
    {
        int parentIndex = (currentIndex - 1) / 2;
        if (v[parentIndex] <= v[currentIndex])
        {
            swap(v[parentIndex], v[currentIndex]);
        }
        else
        {
            break;
        }
        currentIndex = parentIndex;
    }
}

void deleteMaxNode(vector<int> &v)
{
    v[0] = v[v.size() - 1];
    v.pop_back();
    int current = 0;
    while (true)
    {
        int left = current * 2 + 1;
        int right = current * 2 + 2;
        int last = v.size() - 1;

        if (left <= last && right <= last)
        {
            if (v[left] >= v[right] && v[left] > v[current])
            {
                swap(v[left], v[current]);
                current = left;
            }
            else if (v[right] >= v[left] && v[right] > v[current])
            {
                swap(v[right], v[current]);
                current = right;
            }
            else
            {
                break;
            }
        }
        else if (left <= last)
        {
            if (v[left] > v[current])
            {
                swap(v[left], v[current]);
                current = left;
            }
            else
            {
                break;
            }
        }

        else if (right <= last)
        {
            if (v[right] > v[current])
            {
                swap(v[right], v[current]);
                current = right;
            }
            else
            {
                break;
            }
        }
        else
        {
            break;
        }
    }
}

int getFourthLargest(int arr[], int n)
{
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        insertHeap(v, arr[i]);
    }
    deleteMaxNode(v);
    deleteMaxNode(v);
    deleteMaxNode(v);
    if (n < 4)
    {
        return INT_MIN;
    }
    else
    {

        return v.front();
    }
}