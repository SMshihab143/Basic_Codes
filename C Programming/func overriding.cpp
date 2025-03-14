#include <iostream>
using namespace std;

class person
{
public:
    void display()
    {
        cout<<"person\n";

    }
};

class student : public person
{
public:
    void display()
    {
        cout<<"student\n";
    }
};

class teacher : public person
{
public:
    void display()
    {
        cout<<"teacher\n";
    }
};

int main()
{
    student obj;
    obj.display();
}
