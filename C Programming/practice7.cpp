#include <iostream>
using namespace std;
class circle
{
private:
    int radius;
    int x=radius;
    float pi=3.14;
public:
     double area()
    {

        return pi*x*x;
    }

    void set_radius()
    {
        cin>>x;
    }
    void get_result()
    {

          cout<<"radius is:"<<x;

       cout<<"area:\n";
      cout<<area();

    }

};
int main()
{
    circle obj;
    obj.set_radius();
    obj.get_result();
    obj.area();
}
