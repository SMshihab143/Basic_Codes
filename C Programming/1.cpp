#include <iostream>
using namespace std;
class shihab
{
public:
    virtual void display()
    {
        cout<<"my name";
    }
};

class mithila : public shihab
{
public:
    void display()
    {
        cout<<"her name";
    }
};
int main()
{
    mithila m;
    shihab *s;
    s = &m;
    s -> display();


}
