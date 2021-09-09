#include <iostream>
using namespace std;
class complex
{
public:
    int i, r;

    complex(int real, int imaginary)
    {
        r = real;
        i = imaginary;
    }
};

int main()
{
    int r1, r2, i1, i2;
    cout << "Enter the real and imaginary part of complex number 1: \n";
    cin >> r1 >> i1;

    cout << "Enter the real and imaginary part of complex number 2: \n";
    cin >> r2 >> i2;

    complex c1(r1, i1), c2(r2, i2);

    cout << "The sum of the complex numbers is: " << endl;
    cout << c1.r + c2.r << " + " << c1.i + c2.i << "i" << endl;

    return 0;
}