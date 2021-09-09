//factorial of array elements

#include<iostream>
using namespace std;
int factorial(int fact)
{
    return fact * (fact-1);
}
int main()
{
    int a[4]={2,5,7,8};
    for(int i=0;i<4;i++)
    {
        cout<<"factorial of elements : "<<factorial(a[i])<<endl;
    }
return 0;
}