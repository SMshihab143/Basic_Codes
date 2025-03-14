#include <iostream>
#include<string.h>
using namespace std;
int main()
{
    char str1[] ="hi";
    char str2[] ="hello";

    strcpy(str2, str1);
    cout<<"str2:"<<str1<<endl;
}
