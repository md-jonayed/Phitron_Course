#include<bits/stdc++.h>
using namespace std;

int main(){
    int *a = new int[5];
    // here we created an dynamic array of size 5
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    int *b = new int[7];
    // as we need more data to store so we increased the array size and took new array of size 7
    for(int i=0;i<5;i++){
        b[i] = a[i];
    }
    cin>>b[5]>>b[6];
    for(int i=0;i<7;i++){
        cout<<b[i]<<endl;
    }
    // as here we assigned all the a array elements into b array and increased the size we can delete the a array and save some space 
    delete []a;
    return 0;
}

