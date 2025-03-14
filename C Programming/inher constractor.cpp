#include <iostream>
using namespace std;
class officer
{
public:
        officer()
    {
        cout <<"Office"<<endl;
    }
};
class gradestudent
{
public:
          gradestudent()
    {
        cout <<"gradestudent"<<endl;
    }
};
class teaching
{
public:
          teaching()
    {
        cout <<"teaching"<<endl;
    }
};

class faculty :public teaching
{
public:
          faculty()
    {
        cout <<"faculty"<<endl;
    }
};
class employee : public faculty ,public officer
{
public:
        employee()
    {
        cout <<"employee"<<endl;
    }
};


class student : public gradestudent,public teaching
{
public:
        student()
    {
        cout<<"student"<<endl;
    }
    ~student()
    {
        cout<<"ddddddstudent"<<endl;
    }

};
class person : public employee,public student
{
public:
        person()
    {
        cout <<"person"<<endl;
    }
};
int main()
{
    person obj;

}

