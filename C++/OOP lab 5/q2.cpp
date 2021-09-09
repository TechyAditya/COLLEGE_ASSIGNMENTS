#include <iostream>
using namespace std;
class complex
{
public:
    int i, r;
    complex()
    {
        cout << "Objects are initialised using default consructor" << endl;
    }
    complex(int r1, int r2, int i1, int i2)
    {

        cout << "The sum of the complex numbers is: " << r1 + r2 << "+ " << i1 + i2 << "i" << endl;
    }
    complex(complex &c1, complex &c2)
    {

        cout << "The sum of the complex numbers is: " << c1.r + c2.r << "+ " << c1.i + c2.i << "i" << endl;
    }
    
};
int main()
{
    complex c1, c2;
    cout << "Enter the real and imaginary part of complex number 1: \n";
    cin >> c1.r >> c1.i;

    cout << "Enter the real and imaginary part of complex number 2: \n";
    cin >> c2.r >> c2.i;

    complex(c1.r, c2.r, c1.i, c2.i);
    complex(c1, c2);
    return 0;
}