#include <iostream>
using namespace std;
class Account
{
private:
    char name,Ac_type;
    int ac_no;
    float balance;
public:


    }




class User
{
private:
    char name,Adress;

public:
    void set_value()
    {
        cout<<"Enter your name:\n";
        cin>>name;
        cout<<"Enter your Adress:\n";
        cin>>Adress;
    }
    void get_value()
    {
        cout<<"NAME:"<<name<<endl;
        cout<<"Adress:"<<Adress;
    }

   User()
    {
        cout<<"constructor\n";
    }
    ~User()
    {
        cout<<"constructor\n";
    }


};
int main()
{
  User obj;
  obj.set_value();
  obj.get_value();

}
