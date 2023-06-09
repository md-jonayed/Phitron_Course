#include<bits/stdc++.h>
using namespace std;

int main(){
    string sentance;
    getline(cin,sentance);
    string word;
    cin>>word;
    stringstream ss(sentance);
    string s;
    int count = 0;
    while(ss>>s){
        if(s==word){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}

