#include<iostream>
using namespace std;

class My_life
{
private :
    public:

     My_life()
    {
        cout<<"abc";
    }

};
class My_rules : public My_life
{
private:

    public:

     My_rules()
    {
        cout<<"sms";
    }
   /* public:
        void set_value2()
        {
            cout<<"enter x y z:\n";
            cin>>x>>y>>z;
        }
        void display()
        {
            cout<<My_rules()<<endl;
        }*/

};

int main()
{

    My_rules obj2;
    /*obj2.set_value();
    obj2.get_value();
    obj2.set_value2();
    obj2.display();*/

}
