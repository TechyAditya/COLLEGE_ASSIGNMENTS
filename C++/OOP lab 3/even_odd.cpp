#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int a;
    cout<<"enter a number to check wheather its even or odd"<<endl;
    cin>>a;
    if(a%2 == 0)
    {
        cout<<"it is even";
    }
    else
    {
        cout<<"it is odd";
    }
    return 0;
}