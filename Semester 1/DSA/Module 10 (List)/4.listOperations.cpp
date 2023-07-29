#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> mylist = {5, 1, 4, 2, 3};
    for (int val : mylist)
    {
        cout << val << " ";
    }
    cout << endl;
    // we can remove elemnts form a list:
    list<int> l1 = {5, 1, 4, 4, 2, 3};
    l1.remove(4);
    for (int val : l1)
    {
        cout << val << " ";
    }
    cout << endl;
    // sorting a list in ascending order :
    list<int> l2 = {5, 1, 4, 2, 3};
    l2.sort();
    for (int val : l2)
    {
        cout << val << " ";
    }
    cout << endl;
    // sorting a list in descending order :
    list<int> l3 = {5, 1, 4, 2, 3};
    l3.sort(greater<int>());
    for (int val : l3)
    {
        cout << val << " ";
    }
    cout << endl;
    // finding unique elements from a list :
    list<int> l4 = {5, 1, 4, 2, 3, 5, 4};
    l4.unique();
    for (int val : l4)
    {
        cout << val << " ";
    }
    cout << endl;
    l4.sort();
    l4.unique();

    for (int val : l4)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}