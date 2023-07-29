#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    cin.ignore();
    for (int i = 0; i < testcase; i++)
    {
        string sentence;
        getline(cin, sentence);
        string word;
        stringstream ss(sentence);
        map<string, int> mp;
        int max = 0;
        string s;
        while (ss >> word)
        {
            mp[word]++;
            if (max < mp[word])
            {
                max = mp[word];
                s = word;
            }
        }
        cout << s << " " << max << endl;
    }
    return 0;
}