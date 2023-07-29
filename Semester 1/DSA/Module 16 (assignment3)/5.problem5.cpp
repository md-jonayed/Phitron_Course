#include <bits/stdc++.h>
using namespace std;

string changeColors(string colors)
{
    string endColor;

    for (int i = 0; i < colors.size(); i++)
    {
        if ((i + 1) < colors.size())
        {
            if ((colors[i] == 'R' && colors[i + 1] == 'B') || (colors[i] == 'B' && colors[i + 1] == 'R'))
            {
                endColor = endColor + 'P';
                i++;
            }
            else if ((colors[i] == 'R' && colors[i + 1] == 'G') || (colors[i] == 'G' && colors[i + 1] == 'R'))
            {
                endColor = endColor + 'Y';
                i++;
            }
            else if ((colors[i] == 'B' && colors[i + 1] == 'G') || (colors[i] == 'G' && colors[i + 1] == 'B'))
            {
                endColor = endColor + 'C';
                i++;
            }
            else if (colors[i] == colors[i + 1])
            {
                i = i + 1;
            }
            else
            {
                endColor = endColor + colors[i];
            }
        }
        else
        {
            endColor = endColor + colors[i];
        }
    }

    return endColor;
}

int main()
{
    int testCases;
    cin >> testCases;

    for (int i = 0; i < testCases; i++)
    {
        int noOfColors;
        cin >> noOfColors;
        string s;
        for (int j = 0; j < noOfColors; j++)
        {
            char ch;
            cin >> ch;
            s.push_back(ch);
        }
        string endColor = changeColors(s);

        string f = changeColors(endColor);
        cout << f << endl;
    }

    return 0;
}
