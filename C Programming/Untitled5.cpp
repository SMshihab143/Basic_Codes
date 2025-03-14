#include <iostream>
using namespace std;
int main()
{
int a = 7, b =8 ;
char s;
cin>>s;
switch(s)
{
case '+' :
cout<<a+b;
break;
case '-' :
cout<<a-b;
break;
case '*' :
cout<<a*b;
break;
case '/' :
cout<<"press / for result and press % for reminder"<<endl;
char s2;
cin>>s2;
switch (s2)
{
case '/' : cout<<a/b;break;
case '%' : cout<<a%b;break;
default : cout<<"Invalid"; break;
}
break;
default :
cout<<"Invalid";
break;
}
}
