#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED

#include"Person.h"

class Student:public Person{
private:
    friend class List;
    int level;
    float grade_point_average;
public:
    Student(char *,int,char *,char *,int,float);
    void print();
    void insert();
};

#endif // STUDENT_H_INCLUDED
