#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testCases;
    cin >> testCases;
    for (int i = 1; i <= testCases; i++)
    {
        string s;
        cin >> s;
        int countA = 0;
        int countB = 0;
        for (char ch : s)
        {
            if (ch == 'A')
            {
                countA++;
            }
            else if (ch == 'B')
            {
                countB++;
            }
        }
        if (countA == countB)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}