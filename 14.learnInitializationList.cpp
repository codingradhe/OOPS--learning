/// you can reinitilization to const variable using initialization list;

#include <bits/stdc++.h>
using namespace std;
class abc{
  public:
  int a;
  int b;
  //♥️♥️♥️♥️initialization list;
  abc(int _a,int _b): a(_a),b(_b){}
  void display(){
    cout<<a<<" "<<b<<endl;
  }
};
int main() {
  abc a(4,5);
  a.display();
  return 0;
}
