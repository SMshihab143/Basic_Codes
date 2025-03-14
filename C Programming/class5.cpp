#include <iostream>
using namespace std;

class Absoulate_value
{
 private:
     int num;
 public:
    void set_value()
    {
        cout<<"Type a number:";
        cin>>num;
    }
    void get_value()
    {
        if(num<0)
            num=-num;
        {
            cout<<"The value is="<<num;
        }
    }
};


int main()
{
   Absoulate_value obj;
   obj.set_value();
   obj.get_value();
}
