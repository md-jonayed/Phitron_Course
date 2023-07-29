#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> mp;
    mp["jonayed"] = 19;
    mp.insert({"nakiba", 39});
    // mp.insert(make_pair({"sarkar", 29}));

    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }

    cout << mp["jonayed"] << endl;
    cout << mp["pinky"] << endl;

    if (mp.count("nakiba"))
    {
        cout << "Available" << endl;
    }
    else
    {
        cout << "Not Available" << endl;
    }

    cout << mp.count("nakiba") << endl;
    return 0;
}