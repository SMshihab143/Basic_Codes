#include<iostream>
using namespace std;

class Khonshu
{
public:
    Khonshu()
    {
      cout<<"khonshu\n";
    }
    ~Khonshu()
    {
        cout<<"khonshu_des\n";
    }



};



class Randall : public Khonshu
{
public:
    Randall()
    {
        cout<<"randall\n";

    }
    ~Randall()
    {
        cout<<"Randall_des\n";
    }


};

class MoonKnight : public Randall
{
public:
   MoonKnight()
    {
        cout<<"moonknight\n";
    }
    ~MoonKnight()
    {
        cout<<"Moonlight_des\n";
    }


};




int main()
{
   MoonKnight obj;


}
