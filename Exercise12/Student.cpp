#include"Student.h"
#include<iostream>

using namespace std;

Student::Student(char *myname,int myage ,char *myadd,char *mytel,int mylevel,float mygrade_point_average)
:Person(myname,myage,myadd,mytel){
    level=mylevel;
    grade_point_average=mygrade_point_average;
}

void Student::print(){
    cout<<"Student: "<<endl<<"Name: "<<name<<" "<<"Age: "<<age<<" "<<"Address: "<<add<<" "<<"Tel: "<<tel<<" "<<"Level: "<<level<<" "<<"Grade point average: "<<grade_point_average<<" "<<endl;
}

void Student::insert(){
    Person::ptr=new Student(name,age,add,tel,level,grade_point_average);
}

