#include <iostream>
using namespace std;
double pie = 3.1416;

double area(float r)
{
    return  pie*r*r;
}
float circumference(float r)
{
    return  2*pie*r;
}
int main()
{
    float r;

    cout<<"Enter value of r :";
    cin>>r;
    cout<<"The area of  circle:"<<area(r)<<endl;
    cout<<"the circumference of circle:"<<circumference(r);
}

