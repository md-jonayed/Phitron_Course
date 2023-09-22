// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int testcases;
//     while(testcases--){
//         string s;
//         cin >> s;
//         string zaza = s, kaza = s;
//         while(s!=NULL){
//             if()
//         }
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

int countBottlesOfBlood(string binaryString)
{
    int zazaCount = 0;
    int kazaCount = 0;
    char currentChar = binaryString[0]; // Initialize with the first character

    for (char c : binaryString)
    {
        if (c == currentChar)
        {
            // If the current character matches the bottle type, increment the count
            zazaCount++;
        }
        else
        {
            // If the current character doesn't match, it's the other vampire's turn
            kazaCount++;
            currentChar = c; // Update the current character
        }
    }

    return zazaCount;
}

int main()
{
    string binaryString = "0110111";
    int result = countBottlesOfBlood(binaryString);
    cout << "Zaza drank " << result << " bottles of blood." << endl;
    return 0;
}
