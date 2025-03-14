#include <iostream>
#include<string.h>
using namespace std;
int main()
{
    int i,vowels=0,consonents=0;
    char a[]={"abeilo"};

    for(i=0; a[i] ; i++)
    {
        if((a[i]>=65 && a[i]<=90) || (a[i]>=97 && a[i]<=122))
        {
            if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')
            {
                vowels++;}
            else{
                consonents++;}
        }
        cout<<"vowels"<<" "<<vowels;
        cout<<"consonets"<<" "<<consonents;
    }


    }
