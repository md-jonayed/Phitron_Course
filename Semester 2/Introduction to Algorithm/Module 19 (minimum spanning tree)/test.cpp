// #include <bits/stdc++.h>
// using namespace std;

// const int N = 1e3 + 5;

// class Edge
// {
// public:
//     int a, b, w;
//     Edge(int a, int b, int w)
//     {
//         this->a = a;
//         this->b = b;
//         this->w = w;
//     }
// };

// vector<Edge> graph[N];
// vector<bool> visited(N, false);

// class cmp
// {
// public:
//     bool operator()(Edge a, Edge b)
//     {
//         return a.w > b.w;
//     }
// };

// void prims(int source)
// {
//     priority_queue<Edge, vector<Edge>, cmp> pq;
//     vector<Edge> edgeList;
//     pq.push(Edge(source, source, 0));

//     while (!pq.empty())
//     {
//         Edge parent = pq.top();
//         pq.pop(); // Pop the top element from the priority queue
//         int a = parent.a;
//         int b = parent.b;
//         int w = parent.w;

//         if (visited[b])
//         {
//             continue;
//         }

//         visited[b] = true;
//         edgeList.push_back(parent);

//         for (auto child : graph[b])
//         {
//             if (!visited[child.b])
//             { // Use the ! operator for clarity
//                 pq.push(Edge(child.a, child.b, child.w));
//             }
//         }
//     }

//     edgeList.erase(edgeList.begin()); // Corrected the function name

//     for (auto val : edgeList)
//     {
//         cout << val.a << " " << val.b << " " << val.w << endl;
//     }
// }

// int main()
// {
//     int node, edge;
//     cin >> node >> edge;

//     while (edge--)
//     {
//         int a, b, w;
//         cin >> a >> b >> w;
//         Edge e(a, b, w);
//         graph[a].push_back(e);
//         swap(a, b); // Add this line to add the edge in both directions
//         Edge e2(a, b, w);
//         graph[a].push_back(e2);
//     }

//     prims(1);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// const int N = 1e3 + 5;

// class Edge
// {
// public:
//     int a, b, w;
//     Edge(int a, int b, int w)
//     {
//         this->a = a;
//         this->b = b;
//         this->w = w;
//     }
// };

// class cmp
// {
// public:
//     bool operator()(Edge a, Edge b)
//     {
//         return a.w > b.w;
//     }
// };

// vector<Edge> graph[N];
// vector<bool> visited(N, false);

// void prims(int source, int node)
// {
//     priority_queue<Edge, vector<Edge>, cmp> pq;
//     vector<Edge> edgeList;
//     int count = 0;
//     pq.push(Edge(source, source, 0));

//     while (!pq.empty())
//     {
//         Edge parent = pq.top();
//         pq.pop();

//         if (visited[parent.b])
//         {
//             continue;
//         }

//         visited[parent.b] = true;
//         count++;
//         edgeList.push_back(parent);

//         for (auto child : graph[parent.b])
//         {
//             if (!visited[child.b])
//             {
//                 pq.push(Edge(child.a, child.b, child.w));
//             }
//         }
//     }

//     long long sum = 0;
//     if (count != node)
//     {
//         cout << "Impossible" << endl;
//     }
//     else
//     {
//         for (auto val : edgeList)
//         {
//             sum += val.w;
//         }
//         cout << sum << endl;
//     }
// }

// int main()
// {
//     int node, edge;
//     cin >> node >> edge;

//     while (edge--)
//     {
//         int a, b, w;
//         cin >> a >> b >> w;
//         Edge e1(a, b, w);
//         graph[a].push_back(e1);
//         swap(a, b);
//         Edge e2(a, b, w);
//         graph[b].push_back(e2);
//     }

//     prims(1, node);
//     return 0;
// }

#include <bits/stdc++.h>
#define pi pair<int, int>
using namespace std;
const int N = 1e3 + 5;
vector<pi> v[N];
bool vis[N];
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
class cmp
{
public:
    bool operator()(Edge a, Edge b)
    {
        return a.w > b.w;
    }
};
void prims(int s, int n)
{
    priority_queue<Edge, vector<Edge>, cmp> pq;
    vector<Edge> edgeList;
    pq.push(Edge(s, s, 0));
    int cnt = 0;
    while (!pq.empty())
    {
        Edge parent = pq.top();
        pq.pop();
        int a = parent.a;
        int b = parent.b;
        int w = parent.w;
        if (vis[b])
            continue;
        vis[b] = true;
        cnt++;
        edgeList.push_back(parent);
        for (int i = 0; i < v[b].size(); i++)
        {
            pi child = v[b][i];
            if (!vis[child.first])
            {
                pq.push(Edge(b, child.first, child.second));
            }
        }
    }
    edgeList.erase(edgeList.begin());
    long long sum = 0;
    for (Edge val : edgeList)
    {
        sum += (long long)(val.w);
    }
    if (cnt == n)
    {
        cout << sum << endl;
    }
    else
    {
        cout << "IMPOSSIBLE" << endl;
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b, w;
        cin >> a >> b >> w;
        v[a].push_back({b, w});
        v[b].push_back({a, w});
    }
    prims(1, n);
    return 0;
}