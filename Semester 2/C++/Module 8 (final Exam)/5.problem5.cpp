#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int cls;
    char section;
    int id;
    float mathMarks,englishMarks;
};
bool cmp(Student a, Student b){
    if((a.mathMarks + a.englishMarks)==(b.mathMarks+b.englishMarks)){
        return (a.id<b.id);
    }
    return (a.mathMarks + a.englishMarks)>(b.mathMarks+b.englishMarks);
}
int main(){
    int size;
    cin>>size;
    Student s[size];
    for(int i=0;i<size;i++){
        cin>>s[i].name;
        cin>>s[i].cls;
        cin>>s[i].section;
        cin>>s[i].id;
        cin>>s[i].mathMarks;
        cin>>s[i].englishMarks;
        cin.ignore();
    }
    sort(s,s+size,cmp);
    for(int i=0;i<size;i++){
        cout<<s[i].name<<" "<<s[i].cls<<" "<<s[i].section<<" "<<s[i].id<<" "<<s[i].mathMarks<<" "<<s[i].englishMarks<<endl;
    }

    return 0;
}



