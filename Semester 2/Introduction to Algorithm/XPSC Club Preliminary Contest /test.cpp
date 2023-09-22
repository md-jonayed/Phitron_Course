// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ifstream inputFile("input.txt");

//     if (!inputFile.is_open())
//     {
//         return 1;
//     }

//     string word1, word2;
//     while (getline(inputFile, word1, ' ') && getline(inputFile, word2))
//     {
//         int count = 0;
//         if (word2.size() > word1.size())
//         {
//             cout << "Impossible" << endl;
//             continue;
//         }
//         else
//         {
//             for (int i = 0; i < word2.size(); i++)
//             {
//                 for (int j = 0; j < word1.size(); j++)
//                 {
//                     if (word2[i] == word1[j])
//                     {
//                         count++;
//                         break;
//                     }
//                 }
//             }
//             if (count == word2.size())
//             {
//                 cout << "Possible" << endl;
//             }
//             else
//             {
//                 cout << "Impossible" << endl;
//             }
//         }
//     }
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string word1, word2;
    while (cin >> word1 >> word2)
    {
        int count = 0;
        if (word2.size() > word1.size())
        {
            cout << "Impossible" << endl;
        }
        else
        {
            for (int i = 0; i < word2.size(); i++)
            {
                for (int j = 0; j < word1.size(); j++)
                {
                    if (word2[i] == word1[j])
                    {
                        count++;
                        break;
                    }
                }
            }
            if (count == word2.size())
            {
                cout << "Possible" << endl;
            }
            else
            {
                cout << "Impossible" << endl;
            }
        }
    }
}
