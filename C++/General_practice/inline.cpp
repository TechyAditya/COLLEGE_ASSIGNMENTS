#include <iostream>
using namespace std;
inline int cube(int n)
{
    return n*n*n;
}
int main()
{
    int n;
    cout<<"Enter a number to calculate its cube: "<<endl;
    cin>>n;
    cout<<"The cube of "<<n<<" is "<<cube(n)<<endl;
    return 0;
}