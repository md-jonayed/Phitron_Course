// #include <bits/stdc++.h>
// using namespace std;
// const int N = 1e3 + 5;
// int parent[N];

// void dsuSet(int node)
// {
//     for (int i = 1; i <= node; i++)
//     {
//         parent[i] = -1; // Initialize each node as its own parent
//     }
// }

// int dsuFind(int source)
// {
//     if (parent[source] != -1)
//     {
//         // parent[source] = dsuFind(parent[source]); // Path compression
//         source = parent[source];
//     }
//     // return parent[source];
//     return source;
// }

// void dsuUnion(int a, int b)
// {
//     int leaderA = dsuFind(a);
//     int leaderB = dsuFind(b);
//     if (leaderA != leaderB)
//     {
//         parent[leaderB] = leaderA; // Make leaderA the parent of leaderB
//     }
// }

// int main()
// {
//     int node, edge;
//     cin >> node >> edge;
//     dsuSet(node);
//     while (edge--)
//     {
//         int a, b;
//         cin >> a >> b;
//         dsuUnion(a, b);
//     }
//     cout << dsuFind(2) << endl;
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int parent[1000];
// int parentLevel[1000];
// void dsu_set(int n)
// {
//     for (int i = 1; i <= n; i++)
//     {
//         parent[i] = -1;
//         parentLevel[i] = 0;
//     }
// }
// int dsu_find(int node)
// {
//     while (parent[node] != -1)
//     {
//         node = parent[node];
//     }
//     return node;
// }
// void dsu_union(int a, int b)
// {
//     int leaderA = dsu_find(a);
//     int leaderB = dsu_find(b);
//     if (leaderA != leaderB)
//     {
//         if (parentLevel[leaderA] > parentLevel[leaderB])
//         {
//             parent[leaderB] = leaderA;
//         }
//         else if (parentLevel[leaderB] > parentLevel[leaderA])
//         {
//             parent[leaderA] = leaderB;
//         }
//         else
//         {
//             parent[leaderB] = leaderA;
//             parentLevel[leaderA]++;
//         }
//     }
// }
// int main()
// {
//     int n, e;
//     cin >> n >> e;
//     dsu_set(n);
//     while (e--)
//     {
//         int a, b;
//         cin >> a >> b;
//         dsu_union(a, b);
//     }
//     cout << dsu_find(2);
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int parent[N];
int parentSize[N];
void dsu_set(int n)
{
    for (int i = 1; i <= n; i++)
    {
        parent[i] = -1;
        parentSize[i] = 1;
    }
}
int dsu_find(int node)
{
    while (parent[node] != -1)
    {
        node = parent[node];
    }
    return node;
}
int mx = 0;
void dsu_union(int a, int b)
{
    int leaderA = dsu_find(a);
    int leaderB = dsu_find(b);
    if (leaderA != leaderB)
    {
        if (parentSize[leaderA] > parentSize[leaderB])
        {
            // A leader
            parent[leaderB] = leaderA;
            parentSize[leaderA] += parentSize[leaderB];
            mx = max(mx, parentSize[leaderA]);
        }
        else
        {
            parent[leaderA] = leaderB;
            parentSize[leaderB] += parentSize[leaderA];
            mx = max(mx, parentSize[leaderB]);
        }
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    dsu_set(n);
    int cmp = n;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        int leaderA = dsu_find(a);
        int leaderB = dsu_find(b);
        if (leaderA != leaderB)
        {
            cmp--;
            dsu_union(a, b);
        }
        cout << cmp << " " << mx << endl;
    }
    return 0;
}