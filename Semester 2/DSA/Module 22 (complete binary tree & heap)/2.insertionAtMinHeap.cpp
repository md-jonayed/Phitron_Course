#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> minHeap;
    int size;
    cout << "enter size of the heap : ";
    cin >> size;
    cout << endl;
    cout << "enter values : ";
    for (int i = 0; i < size; i++)
    {
        int value;
        cin >> value;
        minHeap.push_back(value);
        int currentIndex = minHeap.size() - 1;
        while (currentIndex != 0)
        {
            int parentIndex = (currentIndex - 1) / 2;
            if (minHeap[parentIndex] >= minHeap[currentIndex])
            {
                swap(minHeap[parentIndex], minHeap[currentIndex]);
            }
            else
            {
                break;
            }
            currentIndex = parentIndex;
        }
    }

    for (int value : minHeap)
    {
        cout << value << " ";
    }

    return 0;
}