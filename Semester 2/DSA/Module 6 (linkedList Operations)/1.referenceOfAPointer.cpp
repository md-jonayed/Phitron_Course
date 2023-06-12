#include <bits/stdc++.h>
using namespace std;
void fun(int *&p)
{
    cout << &p << endl;
    // p = NULL;
    // cout << p << endl;
}
int main()
{
    int val = 10;
    int *p = &val;
    // cout << *p << endl;
    fun(p);
    // cout << *p << endl;

    cout << p << endl;
    return 0;
}