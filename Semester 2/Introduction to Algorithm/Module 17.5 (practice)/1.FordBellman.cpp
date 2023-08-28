// #include <bits/stdc++.h>
// using namespace std;
// // const long long N = 1e3 + 5;
// class Edges
// {
// public:
//     long long a, b, w;
//     Edges(long long a, long long b, long long w)
//     {
//         this->a = a;
//         this->b = b;
//         this->w = w;
//     }
// };
// // long long dist[N];
// int main()
// {
//     vector<Edges> graph;
//     long long node, edge;
//     cin >> node >> edge;
//     while (edge--)
//     {
//         long long a, b, w;
//         cin >> a >> b >> w;
//         Edges e(a, b, w);
//         graph.push_back(e);
//     }
//     long long dist[node + 1];
//     for (int i = 0; i < node + 1; i++)
//     {
//         dist[i] = INT_MAX;
//     }
//     dist[1] = 0;
//     for (int i = 1; i <= node - 1; i++)
//     {
//         for (int j = 0; j < graph.size(); j++)
//         {
//             Edges e = graph[j];
//             long long a = e.a;
//             long long b = e.b;
//             long long w = e.w;
//             if (dist[b] > dist[a] + w)
//             {
//                 dist[b] = dist[a] + w;
//             }
//         }
//     }

//     for (int i = 1; i <= node; i++)
//     {
//         if (dist[i] == INT_MAX)
//         {
//             cout << 30000 << " ";
//         }
//         else
//         {
//             cout << dist[i] << " ";
//         }
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

class Edges
{
public:
    long long a, b, w;
    Edges(long long a, long long b, long long w)
    {
        this->a = a;
        this->b = b;
        this->w = w;
    }
};

int main()
{
    vector<Edges> graph;
    long long node, edge;
    cin >> node >> edge;
    while (edge--)
    {
        long long a, b, w;
        cin >> a >> b >> w;
        Edges e(a, b, w);
        graph.push_back(e);
    }

    vector<long long> dist(node + 1, INT_MAX);
    dist[1] = 0;

    for (int i = 1; i <= node; i++)
    {
        for (int j = 0; j < graph.size(); j++)
        {
            Edges e = graph[j];
            long long a = e.a;
            long long b = e.b;
            long long w = e.w;
            if (dist[a] != INT_MAX && dist[b] > dist[a] + w)
            {
                dist[b] = dist[a] + w;
            }
        }
    }

    for (int i = 1; i <= node; i++)
    {
        if (dist[i] == INT_MAX)
        {
            cout << 30000 << " ";
        }
        else
        {
            cout << dist[i] << " ";
        }
    }

    return 0;
}
