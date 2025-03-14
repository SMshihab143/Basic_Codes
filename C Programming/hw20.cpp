#include <iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"enter the number of x,y=\n";
    cin>>x>>y;
    if(x>0 && y>0)
    {

     cout<<"first quardent";
    }
    else if(x<0 && y>0)
    {

        cout<<"2nd quardent";
    }
    else if(x<0 && y<0)
    {
        cout<<"3rd quardent";
    }
    else if(x>0 && y<0)
    {
        cout<<"4th quardent";
    }

}
