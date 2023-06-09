#include<bits/stdc++.h>
using namespace std;

class Cricketer{
    public:
    int jersyNumber;
    char country[1001];
};

int main(){
    Cricketer *dhoni = new Cricketer;
    dhoni->jersyNumber = 10;
    strcpy(dhoni->country,"India");

    Cricketer *kohli = new Cricketer;
    strcpy(kohli->country,dhoni->country);
    // kohli->jersyNumber = dhoni->jersyNumber;
    // kohli = dhoni;
    cout<<kohli->jersyNumber<<" "<<kohli->country<<endl;
    return 0;
}

