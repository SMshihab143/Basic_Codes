#include <iostream>
using namespace std;

class Rev
{
private:
    int a,d1,d2,d3,d4,d5,rev;
public:
    void set_value()
    {
        cout<<"Enter a four digit number:";
        cin>>a;
    }
    void get_value()
    {
        d1=a/1000;
        d2=(a%1000)/100;
        d3=(a%100)/10;
        d4=(a%10);
        cout<<d1<<endl<<d2<<endl<<d3<<endl<<d4<<endl;
        rev=d4*1000+d3*100+d2*10+d1;
        cout<<rev;
    }
};
int main()
{
   Rev obj;
   obj.set_value();
   obj.get_value();
}
