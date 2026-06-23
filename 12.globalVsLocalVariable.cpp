#include <bits/stdc++.h>
using namespace std;

int x = 2; // global variable;

void display(){
  int x = 9;
  cout<<x<<endl;
  cout<<::x<<endl;
}
int main()
{
  int x = 4;
  cout<<x<<endl;// access most local variable output-> 4;
  // access global variablee by " :: " double collon you can change global variable by this;
  cout<<::x<<endl;
  {
    int x = 50;
    cout<<x<<endl;//output =50 most local;
  }
  display();
  ::x = 5;
  // now global varible will change for all code below it;
  display();
  cout<<::x<<endl;
  return 0;
}
