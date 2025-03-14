#include <iostream>
using namespace std;
class Pro_Loss
{
private:
    int p,cp,sp;

    int cal()
    {
        p = sp-cp;
        if(p>0)
        {
            cout<<"profit= ";
            return p;
        }
        else if(p==0)
        {
            cout<<"profit= ";
            return 0;
        }
        else
        {
            cout<<"loss= ";
            return -p;
        }
    }

public:
    void set_value()
    {
         cout<<"enter the cost price= "<<endl;
         cin>>cp;
    cout<<"enter the sell price= "<<endl;
        cin>>sp;
    }
    void get_value()
    {

        cout<<cal();
    }
};
int main()
{


     Pro_Loss obj;
    obj.set_value();
    obj.get_value();
}

