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
  student(){
    cout<<"students default constructor is called"<<endl;
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
  student a;
  a.id = 1;
  a.age = 25;
  a.name  = " radheshyam chaudhary";
  a.nos = 5;
  a.study();
  a.sleep();
  return 0;
}

