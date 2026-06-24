// ♥️♥️♥️ use of virtual keyword --
#include <bits/stdc++.h>
using namespace std;

class shape{
  public:
  virtual void draw(){
    cout<<" generaic deawing...."<<endl;
  }
};

class circle : public shape{
  public:
  void draw() override {
    cout<<"circle is drawing .."<<endl;
  }
};

class rectange : public shape{
  public:
  void draw() override {
    cout<<"tectangle is drawing .."<<endl;
  }
};

class triangle : public shape{
  public:
  void draw() override {
    cout<<"triangle is drawing .."<<endl;
  }
};
int main() {
  // just normal call 
  shape *s1 = new shape();
  s1->draw();
  // normal 
  circle *c = new circle();
  c->draw();
  // upcasting make circle and give pointer of shape
  shape *s2 = new circle();
  s2->draw();
  {
  //downcasting
  // triangle *t1 = new shape();
  // t1->draw();
  }
  return 0;
}

