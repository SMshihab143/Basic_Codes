#include <iostream>
using namespace std;
int main()
{
    int cost,unit,quantity,discount;
    cout<<"Enter the unit of your product";
    cin>>unit;
    cout<<"Enter the cost of your product";
    cin>>cost;
    int u=100*unit;
    quantity=(u*cost);
    if (quantity >1000)
    {
        int d=quantity*0.1;
        cout<<"You will get 10% discount="<<d;
    }
    else{cout<<"Don't get any discount";}
}
