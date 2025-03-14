// polymorphism
#include <iostream>
using namespace std;

class Shape
{
 public:
    int a,b;
   virtual string area()
    {
        return "which area do you want?";
    }


};
class Triangle :public Shape
{
public:
    double Triangle1(int a,int b)
    {
        return 0.5*a*b;
    }
};
class Rectangle : public Shape
{
public :
    double Rectangle1 (int a,int b)
    {
        return a*b;
    }
};
int main()
{
    Shape *obj;
    Triangle1 T(10,20);
    Rectangle1 R(3,9);
    obj = &T;
    obj ->area();

}
