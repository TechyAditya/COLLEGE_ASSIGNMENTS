#include <iostream>
using namespace std;
class COMPLEX
{
private:
    int n, i;

public:
    void input()
    {
        cin >> n >> i;
    }
    friend void sum(COMPLEX x, COMPLEX y);
};

void sum(COMPLEX x, COMPLEX y)
{
    COMPLEX result;
    result.n = x.n + y.n;
    result.i = x.i + y.i;
    if (result.i >= 0)
        cout << "Sum = " << result.n << " + " << result.i << "i\n";
    else
        cout << "Sum = " << result.n << " " << result.i << "i\n";
}

int main()
{
    COMPLEX x, y;
    cout << "Enter 1st complex number in the form x + yi: ";
    x.input();
    cout << "Enter 2nd complex number in the form x + yi: ";
    y.input();
    sum(x, y);
    return 0;
}