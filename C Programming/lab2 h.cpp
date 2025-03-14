#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter the number\n";
    cin>>num;

    for(int i=1 ; i<11 ; i++)
    {
        int s=num*i;
        cout<<num<<" * "<<i<<" = "<<s<<endl;
    }
}
