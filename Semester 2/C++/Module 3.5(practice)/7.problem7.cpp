#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    char name[1001];
    int roll;
    char section;
    float mathMarks;
    int cls;

    Student(char *n,int r,char s,float m,int c){
        strcpy(name,n);
        roll = r;
        section = s;
        mathMarks = m;
        cls = c;
    }
};
int main(){
    Student a1("Jonayed",19,'A',98.99,12);

    Student a2("Muntasir",4,'A',96.99,12);

    Student a3("Alvi",15,'A',93.99,12);

    if(a1.mathMarks>a2.mathMarks && a1.mathMarks>a3.mathMarks){
        cout<<a1.name<<endl;
    }
    else if(a2.mathMarks>a1.mathMarks && a2.mathMarks>a3.mathMarks){
        cout<<a2.name<<endl;
    }
    else{
        cout<<a3.name<<endl;
    }

    return 0;
}

