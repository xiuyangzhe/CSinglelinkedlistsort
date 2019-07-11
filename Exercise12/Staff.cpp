#include"Staff.h"
#include<iostream>

using namespace std;

Staff::Staff(char *myname,int myage,char *myadd,char *mytel,float myhourly_wages)
:Person(myname,myage,myadd,mytel){
    hourly_wages=myhourly_wages;
}

void Staff::print(){
    cout<<"Staff: "<<endl<<"Name: "<<name<<" "<<"Age: "<<age<<" "<<"Address: "<<add<<" "<<"Tel: "<<tel<<" "<<"Hourly wages: "<<hourly_wages<<" "<<endl;
}

void Staff::insert(){
    Person::ptr=new Staff(name,age,add,tel,hourly_wages);
}
