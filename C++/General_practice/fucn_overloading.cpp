#include<iostream>
#define PI 3.14
using namespace std;
void area(int a, int b)
{
    cout<<"area of rectangle is : "<<a*b<<endl;
}
void area(float h, int b)
{
    cout<<"area of triangle is : "<<0.5*h*b<<endl;
}
void area(float r)
{
    cout<<"area of circle is : "<<PI*r*r<<endl;
}

int main()
{
    area(2,7);
    area(3.5f,8);
    area(3.6);
    return 0;
}