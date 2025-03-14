#include <iostream>
using namespace std;

class first
{
public:
    first()
    {
        cout<<"first constructor\n";

    }
    ~first()
    {
        cout<<"first destructor\n";

    }};
    void display()
    {
        cout<<"first function\n";
        first obj1;
    }
};
class second :public first
{
    public:
    second()
    {
        cout<<"second constructor\n";
        second objn1;

    }
    ~second()
    {
        cout<<"second destructor\n";
    }
    void display()
    {
        cout<<"second function\n";
        second obj2;
    }
};*/
int main()
{
    first objF;
    //objF.display();
   // second objS;
    //objS.display();

}
