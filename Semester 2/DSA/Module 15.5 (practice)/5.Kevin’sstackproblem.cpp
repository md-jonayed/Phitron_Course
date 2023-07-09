#include <bits/stdc++.h>
string kevinStackProblem(string &s)
{
    stack<char> st;
    for (char c : s)
    {
        st.push(c);
    }
    s = "";
    while (!st.empty())
    {
        s.push_back(st.top());
        st.pop();
    }
    return s;
}
