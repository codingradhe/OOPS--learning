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
private:
  float* gpa;
  string gf;
public:
  //constructor:default constructor;
  student(int id,int age,string name,int nos,string gf,float gpa){
    cout<<"students default constructor is called"<<endl;
    this->id = id;
    this->name = name;
    this->nos = nos;
    this->age = age;
    this->gf = gf;
    this->gpa =  new float(gpa);
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
    delete gpa;
    cout<<"student default destructor is called\n";
  }
public:
  void setgpa(float a){
    *this->gpa = a;
  }
  float getgpa()const{
    return *this->gpa;
  }
  float getage()const{
    return this->age;
  }
private:
  void gfChatting(){
    cout<<this->name<<" chatting with gf\n";
  }
};

int main() {
  student a = {1,25,"radheshyam chaudhary",5,"sheha",8.7};
  cout<<a.getgpa()<<endl;
  a.setgpa(6.8);
  cout<<a.getgpa()<<endl;
  cout<<a.getage()<<endl;
  // cout<<a.gf && cout<<a.gfChatting(); gives error because gives error;
  return 0;
}
