#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cin >> size;
    vector<long long> list1;
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
            sort(list1.begin(), list1.end());
            cout << list1[0] << endl;
        }
        else if (command == 1)
        {
            if (list1.empty() == true)
            {
                cout << "Empty" << endl;
            }
            else
            {
                sort(list1.begin(), list1.end());
                cout << list1[0] << endl;
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

                sort(list1.begin(), list1.end());
                list1.erase(remove(list1.begin(), list1.end(), list1[0]), list1.end());
                if (list1.empty() == true)
                {
                    cout << "Empty" << endl;
                }
                else
                {

                    sort(list1.begin(), list1.end());
                    cout << list1[0] << endl;
                }
            }
        }
    }

    return 0;
}