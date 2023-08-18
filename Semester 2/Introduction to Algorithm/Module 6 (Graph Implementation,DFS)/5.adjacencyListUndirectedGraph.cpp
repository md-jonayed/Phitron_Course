#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
vector<int> adjL[N];
int main()
{
    int node, edge;
    cin >> node >> edge;
    for (int i = 0; i < edge; i++)
    {
        int node1, node2;
        cin >> node1 >> node2;
        adjL[node1].push_back(node2);
        adjL[node2].push_back(node1);
    }
    for (int i = 1; i <= node; i++)
    {
        cout << "list " << i << " : ";
        for (int j : adjL[i])
        {
            cout << j << ",";
        }
        cout << endl;
    }
}