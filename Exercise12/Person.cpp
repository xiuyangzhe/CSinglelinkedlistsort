#include"Person.h"
#include<iostream>
#include <cstring>


using namespace std;

Person *Person::ptr=NULL;

Person::Person(char *myname,int myage,char *myadd,char *mytel){
    strcpy(name,myname);
    age=myage;
    strcpy(add,myadd);
    strcpy(tel,mytel);
}

void Person::print(){
    cout<<"Person: "<<endl<<"Name: "<<name<<" "<<"Age: "<<age<<" "<<"Address: "<<add<<" "<<"Tel: "<<tel<<" "<<endl;
}

void Person::insert(){
    Person::ptr=new Person(name,age,add,tel);
}

