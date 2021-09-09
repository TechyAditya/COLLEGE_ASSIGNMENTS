#include<iostream>
#include<conio.h>
using namespace std;
int a=3;
int b=6;
int main()
{
    int a=8;
    cout<<"global variable a "<<::a<<endl;
    cout<<"local variabblr a "<<a<<endl;
    cout<<"global variable b "<<b;
    return 0;
}