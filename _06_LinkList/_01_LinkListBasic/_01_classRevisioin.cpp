#include<bits/stdc++.h>
using namespace std;
class Student{  //user defined data type.
public:
    string name;
    int roll;
    float marks;
    Student(string name,int roll,float marks){
        this->name=name;
        this->roll=roll;
        this->marks=marks;
    }
};
void change(Student &t){
    t.name="Prakhar";
}

int main(){
    Student s("Prince",18,92.9);
    // s.name="Prince";
    // s.name=18;
    // s.marks=92.9;
    cout<<s.name<<endl;
    change(s);
    cout<<s.name;
    return 0;
}













#include<bits/stdc++.h>
using namespace std;
class Student{  //user defined data type.
public:
    string name;
    int roll;
    float marks;
    Student(string name,int roll,float marks){
        this->name=name;
        this->roll=roll;
        this->marks=marks;
    }
};
void change(Student* t){
    t->name="Prakhar";
}
int main(){
    Student s("Prince",18,92.9);
    Student* ptr=&s;
    cout<<s.name<<endl;
    change(&s);
    cout<<s.name<<endl;
    return 0;
}












#include<bits/stdc++.h>
using namespace std;
class Student{  //user defined data type.
public:
    string name;
    int roll;
    float marks;
    Student(string name,int roll,float marks){
        this->name=name;
        this->roll=roll;
        this->marks=marks;
    }
};
void change(Student* t){
    t->name="Prakhar";
}
int main(){
    Student* s=new Student("Prince",18,92.9);
    cout<<s->name<<endl;
    change(s);
    cout<<s->name<<endl;
    return 0;
}