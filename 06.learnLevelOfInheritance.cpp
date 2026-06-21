// 🖊️🖊️🖊️when you call derived class then first parent class constructor is called and then child class constructor called;
// 🖊️🖊️🖊️when you call derived class then first child class destructor is called and then parent class constructor called;
#include <bits/stdc++.h>
using namespace std;

class employe {
protected:
  string name;
  int employeid;
public:
  employe(string nam,int empid){
    this->name = nam;
    this->employeid = empid;
  }
  void display() const{
    cout<<"employe "<<name<<" ID: "<<employeid<<endl;
  }
};

//derived class for single ingeritance
// PL = programming language
class developer : public employe {
private:
  string PL;
public:
  developer(string nam,int empid,string _PL) :employe(nam,empid){
    this->PL = _PL;
  }
  void show() const{
    display();
    cout<<" specilization : developer "<< PL<<endl;
  }
};
//base class for multiple inheritance
// proM = project manager;
class proM {
protected:
  string proManage;
public:
  proM(string project){
    this->proManage = project;
  }
  void proManaged(){
    cout<<" project manager managing project "<< proManage <<endl;
  }
};
//base class for mulltiple inheritance 
class teamLead{
protected:
  int teamsize;
public:
  teamLead(int ts){
    this->teamsize = ts;
  }
  void leadteam(){
    cout<<"team lead is leadiing a team of "<<teamsize<< endl;
  }
};
class techlead :public employe,public proM,public teamLead{
public:
  techlead(string nam,int empid,string project,int ts):employe(nam,empid),proM(project),teamLead( ts){}
  
  void displayInfo(){
    display();
    proManaged();
    leadteam();
  }
};
int main() {
  developer dev = {"ramu kaka",123,"c++" };
  dev.show();
  techlead tc("aanna dev",202,"Project x", 5);
  tc.displayInfo();
  return 0;
}
