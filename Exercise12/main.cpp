#include "List.h"
#include "Person.h"
#include "Student.h"
#include "Teacher.h"
#include "Staff.h"

using namespace std;

int main()
{
    List people;
	people.ReadFiles();
    //Person per("SunQi",50,"Shanghai","62223315");
    //Student stu("LiuYing",20,"Shanghai","33578356",3.3,85);
    //Teacher tea("LiMing",35,"Beijing","86957106",3500);
    //Staff sta("ChenLing",40,"Qingdao","72245316",10);
    //people.insert_Person(&per);
    //people.insert_Person(&stu);
    //people.insert_Person(&tea);
    //people.insert_Person(&sta);
    //people.print_List();
    //cout<<endl<<"//////////After remove:////////////"<<endl;
    //people.remove("ChenLing");
    //people.remove("LiMing");
    //people.remove("WangChong");
    //people.print_List();
    return 0;
}
