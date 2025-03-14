#include <iostream>
using namespace std;
class E_O
{
private:

    int num;
public:
    void set_value()
    {
        cout<<"please enter your number: ";
        cin>>num;
    }
    void get_value()
    {
        if(num%2==0)
        {
            cout<<"Even";
        }
        else
            cout<<"odd";
    }
};
int main()
{
    E_O obj;
    obj.set_value();
    obj.get_value();
}
