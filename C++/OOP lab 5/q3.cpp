#include <iostream>
using namespace std;

class DISTANCE
{
private:
    float fet, inch; 
public:
    void getData() 
    {
        cout << "enter feet: ";
        cin >> fet;
        cout << "enter inch: ";
        cin >> inch;
    }
    void showData() 
    {
        cout << fet << " ft " << inch << " in" << endl;
    }
    void sum(DISTANCE a, DISTANCE b)
    {
        fet = a.fet + b.fet;
        inch = a.inch + b.inch;
        fet += (inch / 12);
        inch = (inch % 12);
    }
};