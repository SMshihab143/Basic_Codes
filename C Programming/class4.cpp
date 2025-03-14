#include <iostream>
using namespace std;
class Valid_triangle
{
private:

    int a1,a2,a3,sum;
public:
    void set_value()
    {
        cout<<"enter three angels:";
        cin>>a1>>a2>>a3;
    }
    void get_value()
    {
        int sum=a1+a2+a3;
        if(sum==180)
        {
            cout<<"valid";
        }
        else
            cout<<"invalid";
    }
};
int main()
{
    Valid_triangle obj;
    obj.set_value();
    obj.get_value();
}
