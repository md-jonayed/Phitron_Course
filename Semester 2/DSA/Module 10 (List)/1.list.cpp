#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l1;
    cout << l1.size() << endl;
    list<int> l2(5);
    cout << l2.size() << endl;
    cout << l2.front() << endl;
    list<int> l3(5, 1);
    for (auto it = l3.begin(); it != l3.end(); it++)
    {
        cout << *it << endl;
    }

    // copying one list to another:
    list<int> list1 = {1, 2, 3, 4, 5};
    list<int> list2(list1);
    for (int value : list2)
    {
        cout << value << endl;
    }
    // copying an array into list:
    int a[5] = {10, 20, 30, 40, 50};
    list<int> mylist(a, a + 5);
    for (auto it = mylist.begin(); it != mylist.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    // copying a vetor into list:
    vector<int> v = {1, 11, 111, 1111, 11111};
    list<int> ls(v.begin(), v.end());
    for (int value : ls)
    {
        cout << value << " ";
    }
    return 0;
}