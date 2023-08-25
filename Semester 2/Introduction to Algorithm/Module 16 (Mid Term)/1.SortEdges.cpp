#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> edges;
bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.first != b.first)
    {
        return a.first < b.first;
    }
    else
    {
        return a.second < b.second;
    }
}
int main()
{
    int edge;
    cin >> edge;
    while (edge--)
    {
        int a, b;
        cin >> a >> b;
        edges.push_back({a, b});
    }

    sort(edges.begin(), edges.end(), cmp);

    for (auto nodes : edges)
    {
        cout << nodes.first << " " << nodes.second << endl;
    }
    return 0;
}

// for (int j = 0; j < edges.size() - 1; j++)
//     {
//         for (int i = j + 1; i < edges.size(); i++)
//         {
//             if (edges[j].first > edges[i].first)
//             {
//                 pair<int, int> temp = edges[j];
//                 edges[j] = edges[i];
//                 edges[i] = temp;
//             }
//             else if (edges[j].first == edges[i].first && edges[j].second > edges[i].second)
//             {
//                 pair<int, int> temp = edges[j];
//                 edges[j] = edges[i];
//                 edges[i] = temp;
//             }
//         }
//     }