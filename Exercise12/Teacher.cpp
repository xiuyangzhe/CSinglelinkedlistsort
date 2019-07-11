#include"Teacher.h"
#include<iostream>

using namespace std;

Teacher::Teacher(char *myname,int myage,char *myadd,char *mytel,float mysalary)
:Person(myname,myage,myadd,mytel){
    salary=mysalary;
}

void Teacher::print(){
    cout<<"Teacher: "<<endl<<"Name: "<<name<<" "<<"Age: "<<age<<" "<<"Address: "<<add<<" "<<"Tel: "<<tel<<" "<<"Salary: "<<salary<<" "<<endl;
}

void Teacher::insert(){
    Person::ptr=new Teacher(name,age,add,tel,salary);
}
