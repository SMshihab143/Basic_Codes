#include <iostream>
using namespace std;

string age(int a)
{
    if(a>18)
    {
        return "you are eligible for vote";
    }
    else
    {
        return "you are not eligible for vote";
    }
}



int main()
{
    int num;
    cout<<"Please enter your age: ";
    cin>>num;
    cout<<age(num);
}
