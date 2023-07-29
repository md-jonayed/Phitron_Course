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

int main(){
    Student jonayed(19,4,'A',"Mohammad Jonayed");
    cout<<jonayed.name<<endl;
}