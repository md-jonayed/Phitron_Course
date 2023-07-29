#include<bits/stdc++.h>
using namespace std;
void print(stringstream &word){
    if(word==true){
        print(word)
    }
}
int main(){
    string s;
    getline(cin,s);
    stringstream ss(s);
    int count=0;
    string word;
    int flag=0;
    while (ss>>word){
        print(word);
    }
    cout<<count<<endl;
    return 0;
}

