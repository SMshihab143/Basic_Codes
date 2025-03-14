#include <iostream>
#include <string.h>
using namespace std;
int main()
{
   char s;
   cout<<"enter your string"<<endl;
   cin>>s;
  char arr[s];
   for(int i=0 ; i<=arr[s] ; i++)
   {

    if(arr[i]>=65 && arr[i]<=90 || arr[i]>=97 && arr[i]<=122)

   {
       cout<<"there are no special characters"<<endl;
   }
   else
   {
       cout<<"special characters";
   }
   }

}
