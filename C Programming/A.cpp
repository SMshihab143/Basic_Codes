#include <iostream>
using namespace std;
int main()
{
    int costprice,sellprice,p;
    cout<<"Enter the cost price=\n";
    cin>>costprice;
    cout<<"Enter the sell price=\n";
    cin>>sellprice;
    p=sellprice-costprice;


   /* if(p>0)
    {
        cout<<"profit="<<p;
    }
    else if (p==0)
    {
        cout<<"no profit";
    }
    else
    {
        cout<<"loss="<<-p;
    } */
    (p>0)? cout<<"profit="<<p : (p==0)? cout<<"no profit" : cout<<"loss="<<-p;

}
