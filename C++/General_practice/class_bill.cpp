// #include<iostream>
// using namespace std;

// class Bill
// {
//     char code[20];
//     char name[30];
//     int price;
//     int n;
//     int quantity;
//     public:
//         void input()
//         {
            
//             int i;
//             cout<<"enter number of items u want to buy: ";
//             cin>>n;
//             for(i=1;i<=n;i++)
//             {
//                 cout<<"name of the item : ";
//                 cin>>name;
//                 cout<<"enter code of the product : ";
//                 cin>>code;
//                 cout<<"enter quantinty : "<<endl;
//                 cin>>quantity;
//             }



//         }

// };
// int main()
// {
//     Bill a;
//     a.input();
// return 0;
// }

#include <iostream>
#include <iomanip>
using namespace std;

class Item
{
private:
    char code[10], name[20];
    float price, total;
    int quantity;

public:
    void input();
    void output(int sl);
};

void Item::input()
{
    cout << "Enter code: ";
    cin >> code;
    cout << "Enter name: ";
    scanf(" %[^\n]s", name); //name with space 
    cout << "Enter price: ";
    cin >> price;
    cout << "Enter quantity: ";
    cin >> quantity;
    total = price * quantity;
}

void Item::output(int sl)
{
    cout << setw(8) << left << sl << setw(10) << left << code << setw(20) << left << name << setw(10) << right << price << setw(6) << right << quantity << setw(10) << right << total << endl;
}

int main()
{
    cout << "Enter number of items: ";
    int ctr;
    cin >> ctr;
    Item s[ctr];
    for (int i = 0; i < ctr; i++)
    {
        cout << "ENTRIES FOR ITEM " << i + 1 << endl;
        s[i].input();
    }

    cout << setw(8) << left << "Sl.no" << setw(10) << left << "Code" << setw(20) << left << "Name" << setw(10) << right << "Price" << setw(6) << right << "Qty" << setw(10) << right << "Total" <<endl;
    for (int i = 0; i < ctr; i++)
        s[i].output(i + 1);

    return 0;
}