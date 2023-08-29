#include <bits/stdc++.h>
using namespace std;
int parent[8] = {-1, -1, 1, 1, 6, 4, -1, -1};
int dsuFind(int source)
{
    while (parent[source] != -1)
    {
        source = parent[source];
    }
    return source;
}
int main()
{
    int n;
    cin >> n;
    cout << dsuFind(n) << endl;
    return 0;
}