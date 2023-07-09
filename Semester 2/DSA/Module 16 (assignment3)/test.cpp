// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int testCases;
//     cin >> testCases;
//     for (int i = 0; i < testCases; i++)
//     {
//         int noOfColors;
//         cin >> noOfColors;
//         string s = "";
//         stack<char> st;
//         for (int j = 0; j < noOfColors; j++)
//         {
//             char ch;
//             cin >> ch;
//             s = s + ch;
//             st.push(ch);
//         }
//         for (int j = 0; j < noOfColors; j++)
//         {
//             if ((st.top() == 'R' && s[j] == 'B') || (st.top() == 'B' && s[j] == 'R'))
//             {
//                 st.pop();
//                 if (!st.empty() && st.top() == 'P')
//                 {
//                     st.pop();
//                 }
//                 else
//                 {
//                     st.push('P');
//                 }
//             }
//             else if ((st.top() == 'R' && s[j] == 'G') || (st.top() == 'G' && s[j] == 'R'))
//             {
//                 st.pop();
//                 if (!st.empty() && st.top() == 'Y')
//                 {
//                     st.pop();
//                 }
//                 else
//                 {
//                     st.push('Y');
//                 }
//             }
//             else if ((st.top() == 'B' && s[j] == 'G') || (st.top() == 'G' && s[j] == 'B'))
//             {
//                 st.pop();
//                 if (!st.empty() && st.top() == 'C')
//                 {
//                     st.pop();
//                 }
//                 else
//                 {
//                     st.push('C');
//                 }
//             }
//         }
//     }
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     string s = "RGGR";
//     s.erase(0, 1);
//     cout << s << endl;
//     return 0;
// }
#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int testCases;
    cin >> testCases;

    for (int i = 0; i < testCases; i++)
    {
        int noOfColors;
        cin >> noOfColors;

        stack<char> st;

        for (int j = 0; j < noOfColors; j++)
        {
            char ch;
            cin >> ch;
            st.push(ch);
        }

        stack<char> ans;

        while (!st.empty())
        {
            char c = st.top();
            st.pop();

            if (st.empty())
            {
                ans.push(c);
                break;
            }

            if ((c == 'R' && st.top() == 'B') || (c == 'B' && st.top() == 'R'))
            {
                ans.push('P');
                st.pop();
            }
            else if ((c == 'R' && st.top() == 'G') || (c == 'G' && st.top() == 'R'))
            {
                ans.push('Y');
                st.pop();
            }
            else if ((c == 'B' && st.top() == 'G') || (c == 'G' && st.top() == 'B'))
            {
                ans.push('C');
                st.pop();
            }
            else
            {
                ans.push(c);
            }
        }

        stack<char> c;
        while (!ans.empty())
        {
            c.push(ans.top());
            ans.pop();
        }

        while (!c.empty())
        {
            cout << c.top();
            c.pop();
        }

        // stack<char> finalAns;

        // while (!ans.empty())
        // {
        //     char v = ans.top();
        //     ans.pop();

        //     if (ans.empty() || v != ans.top())
        //     {
        //         finalAns.push(v);
        //     }
        // }
        // stack<char> c;
        // while (!finalAns.empty())
        // {
        //     c.push(finalAns.top());
        //     finalAns.pop();
        // }

        // while (!c.empty())
        // {
        //     cout << c.top();
        //     c.pop();
        // }

        // cout << endl;
    }

    return 0;
}
