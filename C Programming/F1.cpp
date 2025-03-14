#include <iostream>
using namespace std;

int addition(int a,int b)
{
    return a+b;

}
int main()
{
    int a,b;
    cout<<"Please enter two numbers :"<<endl;
    cin>>a>>b;
    cout<<addition(a,b);
}

