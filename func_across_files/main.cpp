#include<iostream>
#include"Person.h"
int main() {
    Person *obj=new Person("Kumar",20);
    obj->Introduce();
    delete obj;
    return 0;
}