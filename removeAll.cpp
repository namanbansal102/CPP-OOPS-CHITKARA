#include<iostream>
#include<string>
using namespace std;
class Teacher{
    public:
    int *tId;
    string teacherName;
    int salary;
    public:
    Teacher(int tI,string Name,int sal){
        tId=new int;
        *tId=tI;
        teacherName=Name;
        salary=salary;
    }
    Teacher(Teacher &p){
        tId=new int;
        *tId=*(p.tId);
        salary=p.salary;
        teacherName=p.teacherName;
    }
    void display(){
        cout<<"Running Display Function";
        cout<<*tId<<endl;
    }
};

int main() {
    Teacher s(79,"naman",10000);
    s.display();
    Teacher t1(s);
    *(t1.tId)=2;
    t1.display();
    s.display();


    return 0;
}