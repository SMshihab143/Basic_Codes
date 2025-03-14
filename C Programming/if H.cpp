#include <iostream>
using namespace std;
int main()
{
    float length,breadth;
    float area,perimeter;
    cout<<"please Enter the length and breadth\n";
    cin>>length>>breadth;
    area = length * breadth;
    perimeter = 0.5 * (length+breadth) ;

    if(area > perimeter)
    {
        cout<<"Area is greater than its primeter";
    }
    else
    {
        cout<<"Invalid";
    }
}
