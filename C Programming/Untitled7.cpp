#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a,b,sum,sub,multiple,sq1,sq2;
    float division;
    cout<<"input a number";
    cin>>a;
    cout<<"input another number";
    cin>>b;
    sum=a+b;
    sub=a-b;
    multiple=a*b;
    division=(float)a/b;
    sq1=pow(a,2);
    sq2=pow(b,2);
    cout<<"Sum= "<<sum<<endl;
    cout<<"Sub= "<<sub<<endl;
    cout<<"Multiple= "<<multiple<<endl;
    cout<<"Division= "<<division<<endl;
    cout<<"a^2="<<sq1<<endl;
    cout<<"b^2="<<sq2<<endl;

}
