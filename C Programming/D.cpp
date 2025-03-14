#include<iostream>
using namespace std;
int main()
{
    int a,d1,d2,d3,d4,d5,rev;
    cout<<"enter a five digit number";
    cin>>a;


    d1=a/10000;
    d2=(a%10000)/1000;
    d3=(a%1000)/100;
    d4=(a%100)/10;
    d5=(a%10);
    cout<<d1<<endl<<d2<<endl<<d3<<endl<<d4<<endl<<d5<<endl;

    rev = d5*10000+d4*1000+d3*100+d2*10+d1;
    cout<<rev;


}
