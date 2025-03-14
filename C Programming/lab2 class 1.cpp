#include <iostream>
#include <math.h>
using namespace std;

class Sum
{
private:
    float a,x,sum,p;
public:
    void set_value()
    {
        cout<<"Enter the value of x:";
        cin>>x;
    }
    void get_value()
    {
        a=(x-1)/x;
        sum=a;
        for(int i=1;i<7;i++)
        {
            p=pow(a,i);
            sum=sum+p;
        }
        cout<<sum;
    }
};






int main()
{
    Sum obj;
    obj.set_value();
    obj.get_value();
}
