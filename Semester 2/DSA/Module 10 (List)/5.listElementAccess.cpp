#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> list1 = {10, 2, 3, 4, 5};
    cout << list1.front() << endl;
    cout << list1.back() << endl;
    cout << *next(list1.begin(), 1) << endl; // shows 1st index elelment
    return 0;
}