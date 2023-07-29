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
            for (auto i = list1.begin(); i != list1.end(); i++)
            {
                if (min >= *i)
                {
                    min = *i;
                }
            }
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
                for (auto i = list1.begin(); i != list1.end(); i++)
                {
                    if (min >= *i)
                    {
                        min = *i;
                    }
                }
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
                for (auto i = list1.begin(); i != list1.end(); i++)
                {
                    if (min >= *i)
                    {
                        min = *i;
                    }
                }
                list1.remove(min);
                if (list1.empty() == true)
                {
                    cout << "Empty" << endl;
                }
                else
                {
                    min = INT_MAX;
                    for (auto i = list1.begin(); i != list1.end(); i++)
                    {
                        if (min >= *i)
                        {
                            min = *i;
                        }
                    }
                    cout << min << endl;
                }
            }
        }
    }

    return 0;
}