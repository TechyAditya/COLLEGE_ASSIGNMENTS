#include <iostream>
using namespace std;
class Rectangle
{
    int length, breadth;
    public:
    void getdata()
    {
        cout<<"Enter the length and breadth of the rectangle: \n";
        cin>>length>>breadth;
    }
    void area()
    {
        int area;
        area=length*breadth;
        cout << "Area of the rectange  : " <<area<< endl;
    }
    friend void area_friend(Rectangle);
};

void area_friend(Rectangle r)
{
    int area;
    area=r.length*r.breadth;
    cout<<"The area of the rectangle  : "<<area<<endl;
}

int main()
{
    Rectangle r;
    r.getdata();
    r.area();
    area_friend(r);
    return 0;
}