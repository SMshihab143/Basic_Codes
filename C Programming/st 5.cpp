#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char arr [] = "We are AIUBIAN";
    int cnt = 1;

     for (int i=0; i < strlen(arr); i++)
     {
        if (arr[i]==' ')
        {
            cnt++;
        }
    }
     cout<<cnt;
}
