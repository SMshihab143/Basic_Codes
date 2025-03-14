#include <iostream>
using namespace std;

int multiplication(int numb)
{
    int s,i,num;
    for(int i=1;i<=10;i++)
    {
        s=numb*i;
        cout<<numb<<"*"<<i<<"="<<s<<endl;
    }
}


int main()
{
    int a;
    cout<<"enter a number:";
    cin>>a;
    cout<<multiplication(a);





}


