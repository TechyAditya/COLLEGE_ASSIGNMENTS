#include<iostream>
using namespace std;
int main()
{
    int sum=0;
    int i=0;
    int A[5][5];
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cout<<"enter elements "<<endl;
            cin>>A[i][j];
        }
    }

    // for(int i=0;i<5;i++)
    // {
    //     for(int j=0;j<5;j++)
    //     {
    //         cout<<A[i][j];
    //     }
    //     cout<<endl;
    // }

// row sum
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            
            sum += A[i][j];
        }
        cout<<" "<<sum;
        sum=0;
    } 
    
    // column sum
    for(int j=0;j<5;j++)
    {
        for(int i=0;i<5;i++)
        {
            
            sum += A[i][j];
        }
        cout<<" "<<sum;
        sum=0;
    } 
    
    
    
return 0;
}


