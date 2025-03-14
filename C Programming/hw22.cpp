#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int b,a,c;
    cout<<"Enter the value of b,a,c\n";
    cin>>b>>a>>c;
    float equation=((-b)+- sqrt(pow(b,2) - (4*a*c) ) ) / (2*a) ;
    if(a!=0)
    {
        cout<<"the equation is imaginary";

    }
    else
    {
        cout<<"invalid";
    }

}
