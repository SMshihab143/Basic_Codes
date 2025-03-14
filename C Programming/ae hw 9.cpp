#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    int arr2[5];
    int j=4;
    for (int i = 0 ; i<5; i++ )
    {
        cin>>arr[i];
    }
    for (int i = 0 ; i<5; i++ )
    {
        arr2[i]=arr[j];
        j--;
    }
    for (int i = 0 ; i<5; i++ )
    {
        cout<<arr2[i];
    }
}


