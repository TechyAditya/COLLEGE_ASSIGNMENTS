#include<iostream>
using namespace std;

class morgan
{
    int  sum;    
    public:
        morgan(int a, int b)
        {
            sum= a+b;
            cout<<"sum "<<sum<<endl;
            
        }
        void disp()
        {
            cout<<"leo";
        }
};
int main()
{   
    int c,d;
    cout<<"enter 2 numbers "<<endl;
    cin>>c>>d;
    morgan e1(c,d);
    e1.disp();
    
    return 0;

}