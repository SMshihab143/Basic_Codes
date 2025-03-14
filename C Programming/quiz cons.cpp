#include <iostream>
using namespace std;
class A
{
public:
    A()
    {
        cout<<"Cons A\n";
    }
    ~A()
    {
        cout<<"Des A\n";
    }
    void Show_data()
    {
        cout<<"func A\n";
         A obj;
    }

};
class B: public A
{
public:
    B()
    {
        cout<<"Cons B\n";
    }
    ~B()
    {
        cout<<"Des B\n";
    }
    void Show_data()
    {
        cout<<"func B\n";
         A obj;
    obj.Show_data();
    }

};
int main()

{
    B obj;
    A obj1;
    obj.Show_data();
    obj1.Show_data();
}
