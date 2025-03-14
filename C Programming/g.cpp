#include <iostream>
using namespace std;
int main()
{
    int number;
    cout<<"type a number=\n";
    cin>>number;
    if(number<0)
       number = -number;
       {
           cout<<"the value is="<<number;
       }

       //((number<0) number = -number)? : cout<<"type a number=\n" : cout<<"the value is="<<number;

}
