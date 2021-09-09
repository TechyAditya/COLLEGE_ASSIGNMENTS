// 2. (Multilevel Inheritance) Modify the program no.  (1) as follows:
// Derive a class named as BOX from RECTANGLE class. Take necessary data & member functions for this box class
//  to calculate the volume of the box. All the data members are initialized through the constructors. Show the
//  result by accessing the area method of circle and rectangle and the volume method of box class through the 
//  objects of box class.
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
class box : public rectangle
{
    public:
    int h;
    int volume_box()
    {
        return r*b*h;
    }
};
int main()
{
    box B;
    cout<<"enter radius of circle"<<endl;
    cin>>B.r;
    cout<<"enter breadth of rectangle"<<endl;
    cin>>B.b;
    cout<<"enter height of box"<<endl;
    cin>>B.h;
    cout<<"area of circle "<<B.area_circle()<<endl;
    cout<<"area of rectangle "<<B.area_rectangle()<<endl;
    cout<<"volume of box "<<B.volume_box();
    return 0;
}