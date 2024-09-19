#include<iostream>
using namespace std;
class Student
{
private : string name, address;
 int age;
 
public : Student(string n="unknown",int a=0,string add="not available")
{
name=n;
age=a;
address=add;
}

void setInfo(string sname, int s_age)
{
name=sname;
age=s_age;

}
void setInfo(string st_name,int s_a,string s_add)
{
name=st_name;
s_a=age;
s_add=address;

}
void showdata()
{
cout<<"\n Name of student is :"<<name;
cout<<"\n Age is :"<<age;
cout<<"\n Address :"<<address;
}
};

int main()
{ int n=10;
Student s[10] = {(Student("priya",21,"nashik")),
(Student("purva",25,"pune")),
(Student("Pratima",21,"pune")),
(Student("John")),
(Student("Sam",26,"goa")),
(Student("Adil",22,"goa")),
(Student("Samantha",29,"nashik")),
(Student("Shiv",26,"nashik")),
(Student("reema",30,"chennai")),
(Student("Seema",25))

};
for(int i=0;i<n;i++)
{
s[i].showdata();
}
}
