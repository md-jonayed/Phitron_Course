#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> list1 = {1, 2, 3, 4, 5, 6};
    cout << list1.max_size() << endl;
    for (int val : list1)
    {
        cout << val << " ";
    }
    cout << endl;
    list1.clear();
    cout << list1.max_size() << endl;
    for (int val : list1)
    {
        cout << val << " ";
    }
    list<int> list2 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    list2.resize(20);
    for (int val : list2)
    {
        cout << val << " ";
    }
    cout << endl;

    list<int> list3 = {1, 2, 3, 4, 5};
    list3.resize(10, 1);
    for (int val : list3)
    {
        cout << val << " ";
    }
    cout << endl;
    list3.resize(2);
    for (int val : list3)
    {
        cout << val << " ";
    }
    cout << endl;
    cout << list3.empty() << endl;
    return 0;
}