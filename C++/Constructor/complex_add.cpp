#include<iostream>
using namespace std;

class complex
{   
    int real, imaginary;
    int a,b,c,d;
    public:
        complex(int a, int b)
        {
            a=real;
            b=imaginary;
        }
        complex()
        {

        }
        void data()
        {            
            cout<<"enter 1st complex number in form of a + ib"<<endl;
            cin>>a>>b;
            cout<<"enter 1st complex number in form of a + ib"<<endl;
            cin>>c>>d;
            cout<<"sum :"<<a+c<<"+"<<"i"<<b+d<<endl;
        }
        ~complex()
        {
            cout<<"desctructor invoked"<<endl;
        }
        
};
int main()
{
    
    
    
    return 0;
}