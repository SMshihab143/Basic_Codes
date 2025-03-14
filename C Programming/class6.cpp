#include <iostream>
using namespace std;

class Young
{
private:
    int a,b,c;
public:
    void set_value()
    {
        cout<<"please enter three numbers:";
        cin>>a>>b>>c;

    }
    void get_value()
    {
        cout<<"the youngest number is=";
        if(a<b && a<c)
        {
            cout<< a;
        }
        else if(b<a && b<c)
        {

            cout<< b;
        }
        else

            cout<< c;
    }
};





int main()
{

     Young obj;
     obj.set_value();
     obj.get_value();
}
