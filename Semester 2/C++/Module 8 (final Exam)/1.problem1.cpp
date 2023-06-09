#include <bits/stdc++.h>

using namespace std;

int main()
{
    int testCase;
    cin >> testCase;
    for (int i = 1; i <= testCase; i++)
    {
        string sentence;
        cin >> sentence;
        string word;
        cin >> word;
        while (sentence.find(word)!=-1)
        {

            int position = sentence.find(word);
            sentence.replace(position,word.length(),"$");
        }
        cout<<sentence<<endl;
    }
}
