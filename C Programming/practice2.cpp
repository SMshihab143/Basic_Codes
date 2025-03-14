#include <iostream>
using namespace std;
class A
{
    public:
    A()
    {
        cout<<"A\n";
    }
    ~A()
    {
        cout<<"A_des\n";
    }
    void a()
    {
        cout<<"A_showdata\n";
    }
};
class B : public A
{
    public:
    B()
    {
        cout<<"B\n";
    }
    ~B()
    {
        cout<<"B_des\n";
    }
    void b()
    {
        cout<<"B_showdata\n";
    }

};
int main()
{
    A obja;
    B objb;
    objb.a();
     objb.b();
}
