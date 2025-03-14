#include <iostream>
using namespace std;
int main()
{
    int age1,age2,age3;
    cout<<"enter the age of three people\n";
    cin>>age1>>age2>>age3;
    if(age1>age2 && age1>age3)
    {
        cout<<"age1 is oldest\n";
    }
    else if(age1<age2 && age1<age3)
    {
        cout<<"age1 is youngest\n";
    }
    if(age2>age1 && age2>age3){cout<<"age2 is the oldest\n";}
    else if(age2<age1 && age2<age3){cout<<"age2 is the youngest\n";}
    if(age3>age1 && age3>age2){cout<<"age3 is the oldest\n";}
    else if(age3<age1 && age3<age2){cout<<"age3 is youngest\n";}
    else{}
}
