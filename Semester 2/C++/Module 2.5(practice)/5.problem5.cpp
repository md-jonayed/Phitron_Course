#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int mx = max(a,b);
    mx = max(mx,c);

    int mn = min(a,b);
    mn = min(mn,c);

    cout<<mn<<" "<<mx<<endl;
    return 0;
}

