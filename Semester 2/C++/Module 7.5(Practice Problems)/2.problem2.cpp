// H. N Times
#include<bits/stdc++.h>
using namespace std;
void print(int number,char c){
    for(int i =0;i<number;i++){
        cout<<c<<" ";
    }
}
int main(){
    int testCases;
    cin>>testCases;
    for(int i=1;i<=testCases;i++){
        int number;
        cin>>number;
        char c;
        cin>>c;
        print(number,c);
        cout<<"\n";
    }
    return 0;
}

