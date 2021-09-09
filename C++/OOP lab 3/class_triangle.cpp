#include<iostream>
using namespace std;

class triangle
{
    int base,height;
    float area;
    public:
        void getData()
        {
            cout<<"enter base of triangle ";
            cin>>base;
            cout<<"enter height of triangle ";
            cin>>height;
        }
        void areaTrin()
        {
            area = 0.5 * base * height;
            cout<<"Rea of triangle is : "<<area<<endl;
        }
};
int main()
{
    triangle t;
    t.getData();
    t.areaTrin();
return 0;
}