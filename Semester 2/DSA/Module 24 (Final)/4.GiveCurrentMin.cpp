#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cin >> size;
    list<long long> list1;
    for (int i = 0; i < size; i++)
    {
        long long val;
        cin >> val;
        list1.push_back(val);
    }
    int queries;
    cin >> queries;
    while (queries--)
    {
        int command;
        cin >> command;
        if (command == 0)
        {
            long long x;
            cin >> x;
            list1.push_back(x);
            long long min = INT_MAX;
            list1.sort();
            min = list1.front();
            cout << min << endl;
        }
        else if (command == 1)
        {
            if (list1.empty() == true)
            {
                cout << "Empty" << endl;
            }
            else
            {
                long long min = INT_MAX;
                list1.sort();
                min = list1.front();
                cout << min << endl;
            }
        }
        else if (command == 2)
        {

            if (list1.empty() == true)
            {
                cout << "Empty" << endl;
            }
            else
            {
                long long min = INT_MAX;
                list1.sort();
                min = list1.front();
                list1.remove(min);
                if (list1.empty() == true)
                {
                    cout << "Empty" << endl;
                }
                else
                {
                    min = INT_MAX;
                    list1.sort();
                    min = list1.front();
                    cout << min << endl;
                }
            }
        }
    }

    return 0;
}