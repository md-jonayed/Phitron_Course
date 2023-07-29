#include <bits/stdc++.h>
using namespace std;

int main()
{
    // assignig into a list:
    list<int> l1 = {1, 2, 3, 4, 5};
    list<int> l2;
    l2 = l1;
    for (int val : l2)
    {
        cout << val << " ";
    }
    cout << endl;
    list<int> l3 = {10, 20, 30, 40, 50};
    list<int> l4;
    l4.assign(l3.begin(), l3.end());
    for (int val : l4)
    {
        cout << val << " ";
    }
    cout << endl;
    // adding elements inside the tail:
    l4.push_back(60);
    for (int val : l4)
    {
        cout << val << " ";
    }
    cout << endl;
    // adding elements in head position:
    l4.push_front(5);
    for (int val : l4)
    {
        cout << val << " ";
    }
    cout << endl;
    // deleting tail element :
    l4.pop_back();
    for (int val : l4)
    {
        cout << val << " ";
    }
    cout << endl;
    // deleting head element :
    l4.pop_front();
    for (int val : l4)
    {
        cout << val << " ";
    }
    cout << endl;
    // inserting into a certain index :
    l4.insert(next(l4.begin(), 2), 25);

    for (int val : l4)
    {
        cout << val << " ";
    }
    cout << endl;
    // erasing an elelemnt from a certain index:
    l4.erase(next(l4.begin(), 2));

    for (int val : l4)
    {
        cout << val << " ";
    }
    cout << endl;
    // inserting multiple elements,or a new list,an array or a vector:
    list<int> list1 = {1, 2, 3};
    l4.insert(next(l4.begin(), 2), {1, 11, 111});

    for (int val : l4)
    {
        cout << val << " ";
    }
    cout << endl;
    l4 = {10, 20, 30, 40, 50};
    l4.insert(next(l4.begin(), 2), list1.begin(), list1.end());

    for (int val : l4)
    {
        cout << val << " ";
    }
    cout << endl;

    l4 = {10, 20, 30, 40, 50};
    int a[3] = {1, 11, 111};
    l4.insert(next(l4.begin(), 2), a, a + 3);
    for (int val : l4)
    {
        cout << val << " ";
    }
    cout << endl;

    l4 = {10, 20, 30, 40, 50};
    vector<int> vec = {2, 22, 222};
    l4.insert(next(l4.begin(), 2), vec.begin(), vec.end());
    for (int val : l4)
    {
        cout << val << " ";
    }
    cout << endl;
    // deleting multiple elements for a list:

    l4 = {10, 20, 30, 40, 50};
    l4.erase(next(l4.begin(), 2), next(l4.begin(), 4));
    for (int val : l4)
    {
        cout << val << " ";
    }
    cout << endl;
    // we can replace a certain value from list with another value:

    l4 = {10, 20, 30, 30, 50};
    replace(l4.begin(), l4.end(), 30, 100);
    for (int val : l4)
    {
        cout << val << " ";
    }
    cout << endl;
    // we can find a certain value is inside a list or not:
    l4 = {10, 20, 30, 30, 50, 70};
    auto it = find(l4.begin(), l4.end(), 10);
    cout << *it << endl;
    if (it == l4.end())
    {
        cout << "NOT FOUND" << endl;
    }
    else
    {
        cout << "FOUND" << endl;
    }
    return 0;
}