#include<iostream>
using namespace std;
class A
{
    int a,b;
public:
    A(int x,int y)
    {
        a = x,b = y;
        cout<<"assigning object value.."<<a<<","<<b<<endl;
    }
    ~ A()
    {

        cout<<"destroying object value.."<<a<<","<<b<<endl;
    }
    friend int myFunc(A obj);
};
int myFunc(A obj)
{
    cout<<"i am inside friend function.."<<endl;
    return obj.a + obj.b;
}
int main()
{
  A obj1(10,20);
  cout<<myFunc(obj1)<<endl;
  return 0;
}


