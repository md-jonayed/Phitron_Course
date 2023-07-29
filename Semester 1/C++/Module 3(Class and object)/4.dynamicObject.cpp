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
    char name[1001]="Jonayed";
    Student *jonayed = new Student(19,42,'A',name);
    cout<<jonayed->name<<endl;
    cout<<(*jonayed).roll<<endl;
}