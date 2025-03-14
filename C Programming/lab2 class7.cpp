#include <iostream>
using namespace std;
class Namota
{
private:
    int num,sum;
    int cal(int num)
    {
        for(int i=1;i<=10;i++)
        {
           sum = num * i ;
           cout<<num <<"*" <<i <<"=" <<sum<<endl;
        }
    }
public:
    int a;
    void set_value()
    {

        cout<<"please enter a number: ";
        cin>>a;
    }
    void get_value()
    {
        cout<<cal(a);
    }

};
int main()
{
    Namota obj;
    obj.set_value();
    obj.get_value();
}
