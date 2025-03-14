//maximum and minimum of an array
#include <iostream>
using namespace std;
int main()
{

    int n, sum=0,maxi,mini;

   cout<<"enter the size of array:";
   cin>> n;
   int arr[n];
   for(int i=0 ; i<n ; i++)
   {
       cin>> arr[i];
   }
   maxi = arr[0];

   for(int i=1 ; i<n ; i++)
   {
       if(maxi > arr[i])
       {
           maxi= arr[i];
       }
   }
   cout<<"minimum is"<<maxi<<endl;
}

