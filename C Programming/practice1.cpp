#include <iostream>
using namespace std;
class Smile
{
public:
    char a=1;
    void get_value()
    {
        for(int i=0; ; i++)
        {
            cout<<a;
        }
    }
};
int main()
{
    Smile obj;
    obj.get_value();
}
