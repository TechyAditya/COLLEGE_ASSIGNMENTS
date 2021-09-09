#include<iostream>
using namespace std;
int main()
{
    int n,q,remainder, result = 0;
    cout<<"enter a number ";
    cin>>n;
    q=n;
    while(q!=0)
    {
        remainder=q%10;
        result=result*10+remainder;
        q=q/10;
    }
    if(result == n)
    {
        cout<<"it's a pallindrome number";
    }
    else
    {
        cout<<"it's not a pallindrome number";
    }
return 0;
}