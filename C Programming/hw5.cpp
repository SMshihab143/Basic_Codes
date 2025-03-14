#include <iostream>
using namespace std;
int main()
{
    int mark;
    cout<<"please enter your mark";
    cin>>mark;
    if(mark>80){cout<<"A";}
    else if(mark>60 && mark<=80){cout<<"B";}
    else if(mark>50 && mark<=60){cout<<"C";}
    else if(mark>45 && mark<=50){cout<<"D";}
    else if(mark>25 && mark<=45){cout<<"E";}
    else{cout<<"F";}

}
