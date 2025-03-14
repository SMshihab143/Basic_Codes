#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"please enter the month number"<<endl;
    cin>>num;
    switch(num)
    {
    case 1:
        cout<<"january=31";
        break;

    case 2:
        int year;
        cout<<"enter the year";
        cin>>year;

        if(year%4 == 0 && year/100 != 0 || year/400 == 0)
        {

            cout<<"february=28";
            break;
        }
        else
        {

            cout<<"february=29";
            break;
        }

    case 3:
        cout<<"march=31";
        break;
    case 4:
        cout<<"april=30";
        break;
    case 5:
        cout<<"may=31";
        break;
    case 6:
        cout<<"june=30";
        break;
    case 7:
        cout<<"july=31";
        break;
    case 8:
        cout<<"august=31";
        break;
    case 9:
        cout<<"septerber=30";
        break;
    case 10:
        cout<<"octobar=31";
        break;
    case 11:
        cout<<"november=30";
        break;
    case 12:
        cout<<"december=31";
        break;

    }
}
