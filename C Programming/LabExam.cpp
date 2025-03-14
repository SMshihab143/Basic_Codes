#include <iostream>
using namespace std;
class Saif
{
    public:
    int x,y;

        int subrac()
        {
            return x-y;
        }
         public:
             void set_value()
             {
                 cout<<"enter two imaginery number:";
                 cin>>x>>y;
             }
             void get_value()
             {
                 cout<<subrac();
             }
};
int main()
{
    Saif obj;
    obj.set_value();
    obj.get_value();
}
