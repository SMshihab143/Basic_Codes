#include<iostream>
#include<string.h>
using namespace std;
int main ()
{

    char x[] = {'a','b','c'};
    char y[] = {'a','b','c'};
    int temp=1;
    if (sizeof(x)/sizeof(x[0]) == sizeof(y)/sizeof(y[0]))
    {
        for (int i =0 ; i<3 ; i++)
        {
            if(x[i] == y[i])
            {
            }
            else
            {
                temp = 0;
            }
        }
        if (temp == 1)
        {
            cout<<"strings are equal";
        }
        else
        {
            cout<<"Not equal";
        }
    }
    else
    {
        cout<<"String length is not equal";
    }
}
