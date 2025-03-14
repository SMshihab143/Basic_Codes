 #include <iostream>
using namespace std;

string prime(int a)
{
    if(a%2==0 && a!=2 || a%3==0 && a!=2 )
    {
        return "not a prime number";
    }
    else
    {
        return "prime number";
    }
}


int main()
{
    int num;
    cout<<"enter a number: ";
    cin>>num;
    cout<<"This is "<<prime(num);
}
