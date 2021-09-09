// 3. (Hierarchical Inheritance) Modify the program no. LE6.1 as follows:
// Derive a class named as CYLINDER from CIRCLE class. Take necessary data & member functions for this class
//  to calculate the volume of the cylinder. Show the result by accessing the area method of circle and rectangle
//  through object of rectangle class and the area of circle and volume method of cylinder class through the 
// objects of cylinder class.

#include<iostream>
using namespace std;

class circle
{
    
    public:
        int area,r;
        float area_circle()
        {
            return 3.14*r*r;
        }
};
class rectangle : public circle
{
    
    public:
    int b;
        int area_rectangle()
        {
            return r*b;
        }

};
class cylinder : public circle
{
    public:
        int h;
        float volume_cylinder()
        {
            return 2*3.14*r*h;
        }
};
int main()
{
    rectangle R;
    cout<<"enter radius of circle"<<endl;
    cin>>R.r;
    cout<<"enter breadth of rectangle"<<endl;
    cin>>R.b;
    cout<<"area of circle "<<R.area_circle()<<endl;
    cout<<"area of rectangle "<<R.area_rectangle()<<endl;

    cylinder C;
    cout<<"enter radius of circle"<<endl;
    cin>>C.r;
    cout<<"enter height of cylinder"<<endl;
    cin>>C.h;
    cout<<"area of circle"<<C.area_circle()<<endl;
    cout<<"volume of cylinder"<<C.volume_cylinder()<<endl;
    
return 0;
}