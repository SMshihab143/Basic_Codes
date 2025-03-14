#include <iostream>
using namespace std;
int main()
{
    int a,n;
    int arr[a]={n};
    cout<<"enter the number of elements"<<endl;
    cin>>a;
    cout<<"enter the elements"<<endl;
    cin>>n;

    for(int i=0 ; i<a ; i++)
    {
       cin>>arr[i];
    }
      int min  =arr[0];
      for(int i=0 ; i<a ; i++)
      {
          if(arr[i] < min)
          {
             int min=arr[i];
          }
          cout<<"minimum element is="<<min;
      }

}
