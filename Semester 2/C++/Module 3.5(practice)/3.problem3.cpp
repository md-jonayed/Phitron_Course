#include<bits/stdc++.h>
using namespace std;
int flag=0;
int palindrome(int *a,int size){
    
    for(int i=0;i<size/2;i++){
        if(*(a+i)==*(a+size-i-1)){
            flag=1;
        }
        else{
            flag = 0;
            break;
        }
    }
    return flag;
}
int main(){
    int size;
    cin>>size;
    int a[size];
    for(int i=0;i<size;i++){
        cin>>a[i];
    }

    int result = palindrome(a,size);
    if(flag ==1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}

