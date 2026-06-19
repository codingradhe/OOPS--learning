// 🥰🥰🥰 enjoy your learning
#include <bits/stdc++.h>
using namespace std;
class student{
  public:
  //attributes 
  int id;
  int age;
  string name;
  int nos;
  //constructor:default constructor;
  student(int id,int age,string name,int nos){
    cout<<"students default constructor is called"<<endl;
    this->id = id;
    this->age = age;
    this->name = name;
    this->nos = nos;
  }
  //constructor:copy constructor;
  student(student &scob){
    cout<<"students copy constructor is called"<<endl;
    this->id = scob.id;
    this->age = scob.age;
    this->name = scob.name;
    this->nos = scob.nos;
  }
  // behaviour/method/ Functions
  void study(){
    cout<<this->name<<" studing"<<endl;
  }
  void sleep(){
    cout<<this->name<<" Sleeping"<<endl;
  }
  void bunk(){
    cout<<this->name<<" Bunking"<<endl;
  }
  
  //destructor 
  ~student(){
    cout<<"student default destructor is called\n";
  }
};

int main() {
  // stack memory allocation
  student a = {1,35."radheshyam chaudhary",5};
  dynamic memory allocation
  student* s = new student(2,25,"janardan",6)
  // IN dynamic memory you have to delete because destructor not called; 
  // call copy constructor
  student c(a);// c(a) && c = a-->> both same;
  calling method in heap or dynamic memory allocaiton
  cout<<s->name;
  delete s;
  return 0;
}
bb
