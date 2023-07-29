// J. Count Letters
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    vector<int> v(s.length());
    for (int i = 0; i < s.size() - 1; i++)
    {
        for (int j = i + 1; j < s.size(); j++)
        {
            if (s[i] == s[j])
            {
                v[s[i] - 'a']++;
            }
        }
    }

    for (int val : v)
    {
        cout << val << endl;
    }
    return 0;
}