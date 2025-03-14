#include <iostream>
using namespace std;
int main()
{
    int year,salary,bonus;
    cout<<"Enter the year of job"<<endl;
    cin>>year;
    cout<<"Enter the amount of salary"<<endl;
    cin>>salary;
    if(year>5)
    {
        bonus =salary*0.05;
        cout<<"the net bonus amount is="<<bonus;
    }
    else{cout<<"dont have bonus";}
}
