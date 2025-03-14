#include <iostream>
using namespace std;
int maxi(int a,int b,int c)
{
    if(a>b && a>c)
    {
        return a;
    }
    else if(b>a && b>c)
    {
        return b;
    }
    else
    {
        return c;
    }
}
int mini(int a,int b,int c)
{
    if(a<b && a<c)
    {
        return a;
    }
   else if(b<a && b<c)
    {
        return b;
    }
    else
    {
        return c;
    }
}
int main()
{
    int a,b,c;
    cout<<"enter your three numbers:"<<endl;
    cin>>a>>b>>c;
    cout<<maxi(a,b,c)<<endl;
    cout<<mini(a,b,c);

}

