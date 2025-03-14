#include <iostream>
using namespace std;
class Factorial_X
{
private:
    int a,f=1;

public:
    void set_value()
    {
        cout<<"please enter a number";
        cin>>a;
    }
    void get_value()
    {
        for(int i=1;i<a;i++)
        {
            f=f*i;
        }
        cout<<"factorial of "<<a<<"is "<<f<<endl;
    }
};

int main()
{
    Factorial_X obj;
    obj.set_value();
    obj.get_value();
}
