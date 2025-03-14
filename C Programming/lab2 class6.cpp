#include <iostream>
using namespace std;
class Ijk
{
private:
    int i,j,k;
public:
    void set_value()
    {
        cout<<"enter three numbers:";
        cin>>i>>j>>k;
    }
    void get_value()
    {
        for(int i=1;i<4;i++)
        {
            for(int j=1;j<4;j++)
            {
                for(int k=1;k<4;k++)
                {
                    if(i!=j && i!=k && j!=k)
                    {
                        cout<<i<<j<<k<<endl;
                    }
                }
            }
        }
    }
};

int main()
{
    Ijk obj;
    obj.set_value();
    obj.get_value();
}
