 #include<iostream>
 using namespace std;

class student
{
    
    char name[20];
    int roll;
    int marks;
    
    public:
        void input()
        {
            cout<<"enter name of student: "<<endl;
            cin>>name;
            cout<<"enter roll number of student: "<<endl;
            cin>>roll;
            cout<<"enter total marks of the student: "<<endl;
            cin>>marks;
        }
        void disp()
        {
            cout<<"student details :"<<endl;
            cout<<"name : "<<name<<endl;
            cout<<"roll no. :"<<roll<<endl;
            cout<<"total marks obatained :"<<marks<<endl;
        }
};
int main()
{
    student s;
    s.input();
    s.disp();
    return 0;
}