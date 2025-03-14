#include <iostream>
using namespace std;
class Factorial
{
private:
    int a,b,sum=0;
public:
    void set_value()
    {
        cout<<"enter two numbers:";
        cin>>a>>b;
    }
    void get_value()
    {
        for(int i=a+1;i<b;i++)
        {
            if(i%2==0)
            {
                sum=sum+i;
            }
        }
        cout<<sum;
    }
};

int main()
{
    Factorial obj;
    obj.set_value();
    obj.get_value();
}
