#include <iostream>
using namespace std;
class officer
{
public:
    void officer1()
    {
        cout <<"Office"<<endl;
    }
};
class gradestudent
{
public:
     void gradestudent1()
    {
        cout <<"gradestudent"<<endl;
    }
};
class teaching
{
public:
     void teaching1()
    {
        cout <<"teaching"<<endl;
    }
};

class faculty
{
public:
     void faculty1()
    {
        cout <<"faculty"<<endl;
    }
};
class employee : public faculty ,public officer
{
public:
     void employee1()
    {
        cout <<"employee"<<endl;
    }
};


class student : public gradestudent,public teaching
{
public:
    void student1()
    {
        cout<<"student"<<endl;
    }

};
class person : public employee,public student
{
public:
   void person1()
    {
        cout <<"person"<<endl;
    }
};
int main()
{
    person obj;
    obj.person1();
    obj.employee1();
    obj.faculty1();
    obj.gradestudent1();
    obj.officer1();
    obj.person1();
    obj.student1();
   obj.teaching1();



}
