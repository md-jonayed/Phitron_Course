// #include <bits/stdc++.h>
// int findSecondLargest(int n, vector<int> &arr)
// {
//     int mx=0;
//     for(int i=0;i<arr.size();i++){
//         if(mx<arr[i]){
//             mx=arr[i];
//         }
//     }

//     int frq[mx];
//     for(int i=0;i<arr.size();i++){
//         frq[arr[i]]++;
//     }
//     int flag=0;
//     for(int i=0;i<mx;i++){
//         if(frq[i]>1){
//             flag=1;
//         }
//     }
//     if(flag==1){
//         set<int>s;
//         for(int i=0;i<arr.size();i++){
//             s.insert(arr[i]);
//         }
//         vector<int>v;
//         for(set<int>::iterator it=s.begin();it!=s.end();it++){
//             v.push_back(*it);
//         }
//         sort(v.begin(),v.end());
//         return v[(v.size())-2];
//     }
//     else{
//         return -1;
//     }
// }

// #include <bits/stdc++.h>
// int findSecondLargest(int n, vector<int> &arr)
// {
//     if (arr.size() < 2) {
//         return -1; // Not enough elements to find the second largest
//     }

//     int largest = max(arr[0], arr[1]);
//     int secondLargest = min(arr[0], arr[1]);

//     for (int i = 2; i < arr.size(); i++) {
//         if (arr[i] > largest) {
//             secondLargest = largest;
//             largest = arr[i];
//         } else if (arr[i] > secondLargest && arr[i] != largest) {
//             secondLargest = arr[i];
//         }
//     }

//     return secondLargest;
// }
