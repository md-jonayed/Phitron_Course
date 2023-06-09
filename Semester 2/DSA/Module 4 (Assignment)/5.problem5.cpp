#include <bits/stdc++.h>
using namespace std;

int main()
{
    int lines;
    cin >> lines;
    if (lines % 2 == 0)
    {

        int upperSpace1 = 0; // space will increase by 1;
        int slash1 = 1;
        int upperSpace2 = lines - 2; // this space will decrease by 2;
        int slash2 = 1;
        for (int i = 1; i <= (lines / 2); i++)
        {
            for (int j = 1; j <= upperSpace1; j++)
            {
                cout << " ";
            }
            for (int j = 1; j <= slash1; j++)
            {
                cout << "\\";
            }
            for (int j = 1; j <= upperSpace2; j++)
            {
                cout << " ";
            }
            for (int j = 1; j <= slash2; j++)
            {
                cout << "/";
            }
            cout << endl;
            upperSpace1++;
            upperSpace2 = upperSpace2 - 2;
        }

        int lowerSpace1 = lines / 2 - 1; // this will decrease by 1;
        int slash3 = 1;
        int lowerSpace2 = 0; // this will increase by 2;
        int slash4 = 1;
        for (int i = 1; i <= lines / 2; i++)
        {
            for (int j = 1; j <= lowerSpace1; j++)
            {
                cout << " ";
            }
            for (int j = 1; j <= slash3; j++)
            {
                cout << "/";
            }
            for (int j = 1; j <= lowerSpace2; j++)
            {
                cout << " ";
            }
            for (int j = 1; j <= slash4; j++)
            {
                cout << "\\";
            }
            cout << endl;
            lowerSpace1--;
            lowerSpace2 = lowerSpace2 + 2;
        }
    }
    else
    {
        int upperSpace1 = 0; // space will increase by 1;
        int slash1 = 1;
        int upperSpace2 = lines - 2; // this space will decrease by 2;
        int slash2 = 1;
        for (int i = 1; i <= (lines / 2); i++)
        {
            for (int j = 1; j <= upperSpace1; j++)
            {
                cout << " ";
            }
            for (int j = 1; j <= slash1; j++)
            {
                cout << "\\";
            }
            for (int j = 1; j <= upperSpace2; j++)
            {
                cout << " ";
            }
            for (int j = 1; j <= slash2; j++)
            {
                cout << "/";
            }
            cout << endl;
            upperSpace1++;
            upperSpace2 = upperSpace2 - 2;
        }
        int x = 1;
        for (int k = 1; k <= 1; k++)
        {
            for (int j = 1; j <= (lines / 2); j++)
            {
                cout << " ";
            }
            for (int j = 1; j <= x; j++)
            {
                cout << "X";
            }
            cout << endl;
        }
        int lowerSpace1 = lines / 2 - 1; // this will decrease by 1;
        int slash3 = 1;
        int lowerSpace2 = 1; // this will increase by 2;
        int slash4 = 1;
        for (int i = 1; i <= lines / 2; i++)
        {
            for (int j = 1; j <= lowerSpace1; j++)
            {
                cout << " ";
            }
            for (int j = 1; j <= slash3; j++)
            {
                cout << "/";
            }
            for (int j = 1; j <= lowerSpace2; j++)
            {
                cout << " ";
            }
            for (int j = 1; j <= slash4; j++)
            {
                cout << "\\";
            }
            cout << endl;
            lowerSpace1--;
            lowerSpace2 = lowerSpace2 + 2;
        }
    }
    return 0;
}
