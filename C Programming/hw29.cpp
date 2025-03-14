#include <iostream>
using namespace std;
int main()
{
    int id;
    float unit,bill,surcharge;
    char name;
    cout<<"Enter your id\n";
    cin>>id;
    cout<<"Enter your name \n";
    cin>>name;
    cout<<"Enter your unit you used";
    cin>>unit;
    if(unit>0 && unit<200)
    {
        bill= unit*1.20;
    }
    else if(unit>=200 && unit<400)
    {
        bill=unit*1.50;
    }
    else if(unit>=400 && unit<600)
    {
        bill=unit*1.80;
        surcharge=(15*bill)/100;
    }
    else if(unit>=600)
    {
        bill=unit*2.00;
        surcharge=(15*bill)/100;
    }
    float netbill=bill+surcharge;
    cout<<"ID no "<<id;
    cout<<"Name "<<name;
    cout<<"BILL "<<bill;
    cout<<
}
