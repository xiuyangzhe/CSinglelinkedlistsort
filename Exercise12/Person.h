#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED

#include<string>
using namespace std;

class Person{
protected:
    friend class List;
    char name[20];
    char add[40];
    char tel[15];
    int age;
    Person *Next;
    static Person *ptr;
public:
    Person(char *,int,char *,char *);
    virtual void print();
    virtual void insert();
};
#endif // PERSON_H_INCLUDED
