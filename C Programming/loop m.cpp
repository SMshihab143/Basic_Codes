#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float x,a,b,c,d;
    cout<<"enter the value of x="<<endl;
    cin>>x;
    a=(x-1)/x;
    cout<<"(x-1)/x="<<a<<endl;

    for(int i=2; i<8 ; i++)
    {
        b=(float) (0.5*pow(a,i));

        d=a+b;
    }


    cout<<"sum of first seven terms="<<d;

}
