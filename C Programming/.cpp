#include <iostream>
using namespace std;

class Person
{
 public:
    int id;
    string name;


    void set_value()
    {
        cout<<"enter the id & name :";
        cin>>id>>name;
    }
    void get_value()
    {
        cout<<"id :"<<id<<endl;
        cout<<"name:"<<name;
    }
};
class student : public Person
{
private:
    int roll;
public:
    void set_value2()
    {
        cout<<"enter roll:";
        cin>>roll;
    }
    void get_value2()
    {
        cout<<"roll:"<<roll;
    }
};
int main()
{
    student obj;
    obj.set_value2();
    obj.get_value2();
    obj.set_value();
    obj.get_value();
}
