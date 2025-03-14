#include <iostream>

using namespace std;

class bash

{ public:

    void khao ()
    {
        cout<<"khaba bondhu\n";
    }
};
class bash2 : public bash
{
    public:

    void khao()
    {
        cout<<"ektu khao\n";
    }
};
int main()
{

    bash2 obj2;
    bash obj1;

    obj2.khao();
    obj1.khao();
}

