#include <iostream>
using namespace std;
struct StudentData              //Question 1 basic struct
{
    string name1;
    int age1;
    int id1;
    int subjectsMarks1[5];        // array of 5 integers for second question
};
struct TeacherData{
    string name;
    int age;
    int id;
    struct StudentData student;
};


int showData(string teacherName,int teacherAge,int teacherId,string studentName,int studentAge, int studentId, int studentMarks[5])        //Function to show data or print data
{

    cout<<"Teacher Name: "<<teacherName<<"\nTeacher Age: "<<teacherAge<<"\nTeacher Id: "<<teacherId<<"\nStudent Name: "<<studentName<<"\nStudent Age: "<<studentAge<<"\nStudent Id: "<<studentId<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<"Student Marks "<<i+1<<" : "<<studentMarks[i]<<endl;
    }

    return 0;
}





int main(){

struct TeacherData Teacher;                     //object declaration for struct
cout<<"Please enter the name of the Teacher : "<<endl;                  //taking basic input from user as asked in question
cin >> Teacher.name;
cout<<"Please enter the age of the Teacher : "<<endl;
cin >> Teacher.age;
cout<<"Please enter the id of the Teacher : "<<endl;
cin >> Teacher.id;


cout<<"Please enter the name of the Teacher's student : "<<endl;                  //taking basic input in nested structure as asked in question
cin >> Teacher.student.name1;
cout<<"Please enter the age of the Teacher's student : "<<endl;
cin >> Teacher.student.age1;
cout<<"Please enter the id of the Teacher's student : "<<endl;
cin >> Teacher.student.id1;

for(int i=0;i<5;i++){                                                   //taking input in array for question 2
    cout<<"\nPlease enter the marks of the Teacher's student in subject "<<i+1<<" : ";
    cin>>Teacher.student.subjectsMarks1[i];
}
system("CLS");                                                         //clearing screen after taking input from user
showData(Teacher.name,Teacher.age,Teacher.id,Teacher.student.name1,Teacher.student.age1,Teacher.student.id1,Teacher.student.subjectsMarks1);               //showing received data in struct


return 0;
}