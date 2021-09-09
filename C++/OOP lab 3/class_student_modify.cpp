 #include<iostream>
 using namespace std;

class student
{
    
    char name[20];
    int roll;
    int total_marks;
    float marks_percentage;
    
    public:
        int a1,a2,a3,a4,a5;
        void input()
        {
            cout<<"enter name of student: "<<endl;
            cin>>name;
            cout<<"enter roll number of student: "<<endl;
            cin>>roll;
            
        }
        void disp()
        {
            cout<<"student details :"<<endl;
            cout<<"name : "<<name<<endl;
            cout<<"roll no. : "<<roll<<endl;
            cout<<"total marks obatained : "<<total_marks<<endl;
            cout<<"total percentage : "<<marks_percentage;
        }
        void marks_stud()
        {
            
            cout<<"enter marks in subject physcis: "<<endl;
            cin>>a1;
            cout<<"enter marks in subject chemistry: "<<endl;
            cin>>a2;
            cout<<"enter marks in subject maths: "<<endl;
            cin>>a3;
            cout<<"enter marks in subject DSA: "<<endl;
            cin>>a4;
            cout<<"enter marks in subject OOP: "<<endl;
            cin>>a5;
            total_marks=a1+a2+a3+a4+a5;
            marks_percentage= (a1+a2+a3+a4+a5)/5;
            
        }
};
int main()
{
    student s;
    s.input();
    s.marks_stud();
    s.disp();
    return 0;
}