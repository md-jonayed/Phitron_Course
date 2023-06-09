#include<bits/stdc++.h>
using namespace std;

class MyClass {
public:
    int value;

    MyClass(int val) : value(val) {}
};

MyClass& getStaticObject() {
    static MyClass staticObject(42);
    return staticObject;
}

int main() {
    MyClass& obj = getStaticObject();
    cout << obj.value <<endl;  

    obj.value = 99;
    cout << obj.value << endl;  

    MyClass& obj2 = getStaticObject();
    cout << obj2.value << endl;  

    return 0;
}
