#include<iostream>
using namespace std;
class Practice
{
private:
    int Y;
    string cal(int Y)
    {
        if (Y%4==0 && Y/100 !=0 || Y/400==0)
        {
            return "leap year";
        }
        else
        {
            return "not leap year";
        }
    }
public:
    void set_value()
    {
        cin>>Y;
    }
    void get_value()
    {
        cout<<cal(Y);
    }
};
int main()
{

    cout<<"please enter your year: ";

    Practice obj;
    obj.set_value();
    obj.get_value();
}
