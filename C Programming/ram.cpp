#include<iostream>
using namespace std;
int main()
{
    int ram,shyam,ajay;
    cout<<"enter the age of ram,shyam,ajay";
    cin>>ram;
    cin>>shyam;
    cin>>ajay;
    if(ram<shyam && ram<ajay)
    {
        cout<<"ram is the youngest";
    }
    else if (shyam<ram && shyam<ajay)
    {
        cout<<"shyam is the youngest";
    }
    else
    {
        cout<<"ajay is the youngest";
    }
    //(ram<shyam && ram<ajay)? cout<<"ram is the youngest" : (shyam<ram && shyam<ajay)? cout<<"shyam is the youngest" : cout<<"ajay is the youngest";

}
