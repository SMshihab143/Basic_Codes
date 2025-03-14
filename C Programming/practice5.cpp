#include <iostream>
using namespace std;
class time
{
    int hour,minute,second;
    void print()
    {
        cout<<hour<<","<<minute<<","<<second<<endl;
    }
public:
    time(int hour,int minute,int second)
    {
        cout<<"perametarized cons:"<<endl;
        settime(hour,minute,second);
        print();
    }
    ~time()
    {
        cout<<"destructor:"<<endl;
        settime(0,0,0);
        print();
    }
    void settime(int h,int m,int s)
    {
        cout<<"settime:"<<endl;
        hour = h,minute=m,second=s;
        print();
    }
};
int main()
{
    time t1(1,1,1);
    t1.settime(2,2,2);
    time t2(3,3,3);
    return 0;
}
