#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> maxHeap;
    int size;
    cout << "enter heap size : ";
    cin >> size;

    cout << endl;
    cout << "enter values : ";
    for (int i = 0; i < size; i++)
    {
        int value;
        cin >> value;
        maxHeap.push_back(value);
        int currentIndex = maxHeap.size() - 1;
        while (currentIndex != 0)
        {
            int parentIndex = (currentIndex - 1) / 2;
            if (maxHeap[parentIndex] <= maxHeap[currentIndex])
            {
                swap(maxHeap[parentIndex], maxHeap[currentIndex]);
            }
            else
            {
                break;
            }
            currentIndex = parentIndex;
        }
    }

    for (int value : maxHeap)
    {
        cout << value << " ";
    }
    return 0;
}