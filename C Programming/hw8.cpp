#include<iostream>
using namespace std;
int main()
{
    int classno,atdclass;
    cout<<"enter total class no=\n";
    cin>>classno;
    cout<<"enter attended class no=\n";
    cin>>atdclass;
    int percent=(atdclass/classno)*100;
    if(percent>75)
    {
        cout<<" exam";
    }
    else
    {
        cout<<" no exam";
    }
}
