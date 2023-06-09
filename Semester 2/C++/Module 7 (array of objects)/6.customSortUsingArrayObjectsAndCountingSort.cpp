#include<bits/stdc++.h>
using namespace std;
class CustomSort{
    public:
    int count;
    char c;
};

bool cmp(CustomSort a, CustomSort b){
    if(a.count>b.count)return true;
    else return false;
}
int main(){
    int n;
    cin>>n;
    CustomSort frq[26];
    for(int i=0;i<26;i++){
        frq[i].count=0;
        frq[i].c = (i+'a');
    }

    for(int i=0;i<n;i++){
        char ch;
        cin>>ch;
        frq[ch-'a'].count++;
    }

    sort(frq,frq+26,cmp);

    for(int i=0;i<26;i++){
        if(frq[i].count>0){
            for(int j=0; j<frq[i].count;j++){
                cout<<frq[i].c;
            }
        }
    }
    return 0;
}

