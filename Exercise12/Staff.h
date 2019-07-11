#ifndef STAFF_H_INCLUDED
#define STAFF_H_INCLUDED

#include"Person.h"

class Staff:public Person{
private:
    friend class List;
    float hourly_wages;
public:
    Staff(char *,int,char *,char *,float);
    void print();
    void insert();
};


#endif // STAFF_H_INCLUDED
