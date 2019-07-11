#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

#include"Person.h"
#include<iostream>
#include<vector>

using namespace std;

class List{
private:
    Person *root;
public:
    List();	
    void insert_Person(Person *node);
    void remove(char *name);
    void print_List();
	void ReadFiles();
	void WriteFiles();
	std::vector<std::string> split(const string& str, const string& delim);
};

#endif // LIST_H_INCLUDED
