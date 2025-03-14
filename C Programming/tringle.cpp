#include<iostream>
using namespace std;
int main()
{
    int angle1,angle2,angle3,sum;
    cout<<"enter three numbers";
    cin>>angle1>>angle2>>angle3;
    sum=angle1+angle2+angle3;
    if (sum==180)
    {
        cout<<"triangle is valid";
    }
    else
    {
        cout<<"not valid triangle";
    }
    //(sum==180)? cout<<"triangle is valid" : cout<<"not valid triangle";
}
