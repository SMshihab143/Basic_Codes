#include<iostream>
using namespace std;

int factorial( int n)
{
    int fac=1;
    for(int i=1; i<=n; i++)
    {
        fac=fac*i;
    }
    return fac;
}

int main()
{
    int a;
    cout<<"enter your number: ";
    cin>>a;
    cout<<"factorial is: "<<factorial(a);
}
