//fibbonaci number with array
#include <iostream>
using namespace std;
int main()
{
    int n,fibo;
    cout<<"Enter the size of array :";
    cin>>n;
     int arr[n];
     arr[0]=0;
     arr[1]=1;
     for(int i=2 ; i<n ; i++)
     {
         arr[i] = arr[i-1] + arr[i-2];
     }
     for(int i=0 ; i<n ; i++)
     {
         cout<<arr[i]<<" ";
     }
}

