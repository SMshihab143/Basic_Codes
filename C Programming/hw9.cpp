#include<iostream>
using namespace std;
int main()
{
    int classno,atdclass;
    cout<<"enter total class no=\n";
    cin>>classno;
    cout<<"enter attended class no=\n";
    cin>>atdclass;
    int percent=(atdclass/classno)*100;
    if(percent<75)
    {

        char ans;
        cout<<" have you any medical cause? if have press'Y' / dont have press'N'\n";
        cin>>ans;
        if(ans=='Y')
        {
            cout<<"exam";
        }
        else
        {
            cout<<"no exam";
        }



    }

    else
    {
        cout<<"exam";
    }
}






