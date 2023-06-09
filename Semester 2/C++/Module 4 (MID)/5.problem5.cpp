#include<bits/stdc++.h>
using namespace std;
class Person{
    public:
    char name[1001];
    float height;
    int age;

    Person(char *n,float h,int a){
        strcpy(name,n);
        height = h;
        age = a;
    }
    
};
int main(){
    Person *p1 = new Person("Jonayed",5.75,25);

    Person *p2 = new Person("Mohammad",5.8,24);
    if(p1->age>p2->age){
        cout<<p1->name<<endl;
    }
    else{
        cout<<p2->age<<endl;
    }
    
    return 0;
}


    // cout<<p1->name<<" "<<p1->height<<" "<<p1->age<<endl;


    // cout<<p2->name<<" "<<p2->height<<" "<<p2->age<<endl;
