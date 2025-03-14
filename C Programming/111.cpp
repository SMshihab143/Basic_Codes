#include <iostream>
using namespace std;
class Ami
{
    public:
       virtual void display()
        {
            cout<<"er";
        }

};
class Tmi : public Ami
{
public:
    void display()
    {
       cout<<"danish";
    }

};
int main()
{

      Ami *obj;
     Tmi a;
     obj = &a;
     obj-> display();
}

