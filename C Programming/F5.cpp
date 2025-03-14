#include <iostream>
using namespace std;

string EvenOdd(int a)

{
    if(a%2==0)
    {
        return "even" ;
    }
    else
    {
        return "odd";
    }
}


int main()
{
    int num;

    cout<<"Enter the number: ";
    cin>>num;
    cout<<"The number is="<<EvenOdd(num);


}
