#include <iostream>
using namespace std;

string grade(int num)
{
    if(num>90 && num<=100)
    {
        return "AA";
    }
    else if(num>80 && num<=90)
    {
        return "AB";
    }
    else if(num>70 && num<=80)
    {
        return "BB";
    }
    else if(num>60 && num<=70)
    {
        return "BC";
    }
    else if(num>50 && num<=60)
    {
        return "CD";
    }
    else if(num>40 && num<=50)
    {
        return "DD";
    }
    else
    {
        return "FAIL";
    }
}


int main()
{
   int mark;
   cout<<"please enter your mark:";
   cin>>mark;
   cout<<grade(mark);
}
