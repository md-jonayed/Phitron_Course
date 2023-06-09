#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    int roll;
    int cls;
    char section;
    char name[1001];
    Student(int r,int c,char s,char *n){
        roll = r;
        cls = c;
        section = s;
        strcpy(name,n); 
    }
};

Student fun(){
    char name[1001]="Rahim";
    Student r(10,9,'B',name);
    return r;
}

int main(){
    Student jonayed = fun();
    cout<<jonayed.name<<endl;
}