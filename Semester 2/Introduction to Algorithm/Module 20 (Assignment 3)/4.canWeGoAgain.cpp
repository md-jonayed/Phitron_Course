// #include <bits/stdc++.h>
// using namespace std;
// const int N = 1005;
// const long long INF = 1e18 + 5;

// int main()
// {
//     int node, edge;
//     cin >> node >> edge;
//     long long dist[N][N];

//     for (int i = 1; i <= node; i++)
//     {
//         for (int j = 1; j <= node; j++)
//         {
//             if (i == j)
//             {
//                 dist[i][j] = 0;
//             }
//             else
//             {
//                 dist[i][j] = INF;
//             }
//         }
//     }

//     while (edge--)
//     {
//         int a, b, w;
//         cin >> a >> b >> w;
//         if (dist[a][b] == INF || dist[a][b] > w)
//         {
//             dist[a][b] = w;
//         }
//     }
//     for (int k = 1; k <= node; k++)
//     {
//         for (int i = 1; i <= node; i++)
//         {
//             for (int j = 1; j <= node; j++)
//             {
//                 if (dist[i][k] != INF && dist[k][j] != INF && dist[i][j] > dist[i][k] + dist[k][j])
//                 {
//                     dist[i][j] = dist[i][k] + dist[k][j];
//                 }
//             }
//         }
//     }

//     int source;
//     cin >> source;
//     int testCase;
//     cin >> testCase;

//     for (int i = 1; i <= testCase; i++)
//     {
//         int destination;
//         cin >> destination;

//         if (source == destination && dist[source][destination] != 0)
//         {
//             cout << "Negative Cycle Detected" << endl;
//             break;
//         }
//         else
//         {
//             if (dist[source][destination] == INF || dist[source][destination] >= INF - 1000)
//             {
//                 cout << "Not Possible" << endl;
//             }
//             else
//             {
//                 cout << dist[source][destination] << endl;
//             }
//         }
//     }

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
const long long INF = 1e18 + 5;
class Edge
{
public:
    int a, b, w;
    Edge(int a, int b, int w)
    {
        this->a = a;
        this->b = b;
        this->w = w;
    }
};

int main()
{
    int node, edge;
    cin >> node >> edge;
    vector<Edge> v;
    for (int i = 0; i < edge; i++)
    {
        int a, b, w;
        cin >> a >> b >> w;
        Edge e(a, b, w);
        v.push_back(e);
    }
    vector<long long> dist(N, INF);
    int source;
    cin >> source;
    dist[source] = 0;
    int testcase;
    cin >> testcase;

    while (testcase--)
    {
        int destination;
        cin >> destination;

        for (int i = 1; i <= node - 1; i++)
        {
            for (const Edge &e : v)
            {
                int a = e.a;
                int b = e.b;
                int w = e.w;
                if (dist[a] != INF && dist[b] > dist[a] + w)
                {
                    dist[b] = dist[a] + w;
                }
            }
        }
        bool flag = false;
        for (const Edge &e : v)
        {
            int a = e.a;
            int b = e.b;
            int w = e.w;
            if (dist[a] != INF && dist[b] > dist[a] + w)
            {
                flag = true;
                break;
            }
        }

        if (flag)
        {
            cout << "Negative Cycle Detected" << endl;
            break;
        }
        else if (dist[destination] == INF)
        {
            cout << "Not Possible" << endl;
        }
        else
        {
            cout << dist[destination] << endl;
        }
    }

    return 0;
}
