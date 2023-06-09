#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    int count = 0;
    string word;
    int flag = 0;
    while (ss >> word)
    {
        if ()
            for (char s : word)
            {
                if (isupper(s) || islower(s))
                {
                    flag = 1;
                }
                else
                {
                    flag = 0;
                }
            }
        if (flag == 1)
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
