#include <iostream>
using namespace std;
int main()
{
     int n;
     int sum=0;

     int arr[11]={0,1,2,3,4,5,6,7,8,9,10};

    for(int i=1 ; i<=arr[11] ; i++)
    {
       sum = sum + arr[i];
    }
   int middle = sum/sizeof arr[11];

   cout<<"the middle value is :"<<middle;
}
