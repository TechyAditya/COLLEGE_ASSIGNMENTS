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
        morgan(morgan &x)
        {
            sum=x.sum;
        }
        void disp()
        {
            cout<<" "<<sum;
        }
};
int main()
{   
    int c,d;
    cout<<"enter 2 numbers "<<endl;
    cin>>c>>d;
    morgan A(c,d);
    morgan C=A;
    morgan B(A);
    C.disp();
    A.disp();
    B.disp();
    return 0;

}