#include <iostream>
using namespace std;

class TEAM07
{
public:
    void display_T()
    {
         cout<<"team_07:\n";

    }
};
class mitul:public TEAM07
{
public:
    void display_M()
    {
         cout<<"mitul:\n";

    }
};class Mahfuj:public TEAM07
{
public:
    void display_MH()
    {
         cout<<"mahfuj:\n";

    }
};
class anik
{
public:
    void display_A()
    {
         cout<<"anik:\n";

    }
};
class sazzad:public TEAM07,public anik
{
public:
    void display_SA()
    {
         cout<<"sazzad:\n";

    }
};class antor:public TEAM07
{
public:
    void display_AT()
    {
         cout<<"antor:\n";

    }
};class rajib:public TEAM07
{
public:
    void display_R()
    {
         cout<<"rajib:\n";

    }
};

class shihab:public sazzad
{
public:
    void display_SH()
    {
         cout<<"shihab:\n";

    }
};


int main()
{
 TEAM07 mainobj;
 mainobj.display_T();

 mitul m;
 m.display_M();
 m.display_T();

 Mahfuj mh;
 mh.display_MH();
 mh.display_T();

 sazzad sa;
 sa.display_SA();
 sa.display_A();
 sa.display_T();

 antor ar;
 ar.display_AT();
 ar.display_T();

 rajib ra;
 ra.display_R();
 ra.display_T();

 shihab sh;
 sh.display_SH();
 sh.display_SA();
 sh.display_A();
 sh.display_T();

}
