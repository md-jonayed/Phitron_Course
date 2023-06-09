// // G. Even Hate Odd
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int testCases;
//     cin >> testCases;
//     for (int i = 0; i < testCases; i++)
//     {
//         int size;
//         cin >> size;
//         int a[size];
//         if (size % 2 != 0)
//         {
//             cout << "-1" << endl;
//         }
//         else
//         {
//             int oddCount=0,evencount=0;
//             for (int i = 0; i < size; i++)
//             {
//                 cin >> a[i];
//                 if(a[i]%2==0){
//                     evencount++;
//                 }
//                 else{
//                     oddCount++;
//                 }
//             }
//             if(evencount==oddCount){
//                 cout<<"0"<<endl;
//             }
//             else{
//                 cout<<abs(evencount-oddCount)/2<<endl;
//             }
//         }
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testCases;
    cin >> testCases; // 3
    while (testCases--)
    { // 3 2 1
        int size;
        cin >> size;
        int even = 0, odd = 0;
        for (int i = 0; i < size; i++)
        { // 3
            int value;
            cin >> value;
            if (value % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        if (even == odd)
        {
            cout << "0" << endl;
        }
        else if (size % 2 != 0)
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << abs(even - odd) / 2 << endl;
        }
    }
}