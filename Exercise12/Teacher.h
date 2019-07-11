#ifndef TEACHER_H_INCLUDED
#define TEACHER_H_INCLUDED

#include"Person.h"

class Teacher:public Person{
private:
    friend class List;
    float salary;
public:
    Teacher(char *,int,char *,char *,float);
    void print();
    void insert();
};


#endif // TEACHER_H_INCLUDED
