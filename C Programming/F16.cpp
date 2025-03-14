#include<iostream>
using namespace std;

class what_age {
private:
    int cy, cm, cd, by, bm, bd;
    int y1, y2, yold, mold, cal, dold;

public:
    void get()
    {
    cout<<"enter the current date(year month date): ";
    cin>>cy>>cm>>cd;
    cout<<"enter your birth date(year month date): ";
    cin>>by>>bm>>bd;
        y1=cy*365+cm*30+cd;
        y2=by*365+bm*30+bd;
        cal=y1-y2;
        yold=cal/365;
        mold=((cal-yold*365)/30)%12;
        dold=(cal-yold*365-mold*30);
    }
    void display ()
    {
        cout<<yold<<'\t'<<mold<<'\t'<<dold;
    }


};
int main()
{
    what_age obj;
    obj.get();
    obj.display();
}

/////////////////normal//////////////////

/*#include<iostream>
using namespace std;

int main()
{
    int cy, cm, cd, by, bm, bd;
    int y1, y2, yold, mold, cal, dold;

    cout<<"enter the current date(year month date): ";
    cin>>cy>>cm>>cd;
    cout<<"enter your birth date(year month date): ";
    cin>>by>>bm>>bd;

    y1=cy*365+cm*30+cd;
    y2=by*365+bm*30+bd;

    cal=y1-y2;
    yold=cal/365;
    mold=((cal-yold*365)/30)%12;

    dold=(cal-yold*365-mold*30);


    cout<<cal<<endl<<20*365+4*30+8;



}
*/
///////////////normal function//////////////////

#include<iostream>
using namespace std;


