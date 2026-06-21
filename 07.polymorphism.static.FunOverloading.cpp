#include <bits/stdc++.h>
using namespace std;

class add{
public:
// 🖊️🖊️♥️ function name should be different from class name.
  int sum(int x,int y) {
    cout<<"sum of two integer\n";
    return x+y;
  }
  int sum(int x,int y,int z) {
    cout<<" sum of 3 integer\n";
    return x+y+z;
  }
  double sum(double x,double y) {
    cout<<"sum of two double\n";
    return x+y;
  }
};
int main() {
  //  🖊️🖊️♥️  initilize by class name
  add s;
  cout<<s.sum(4,5)<<endl;
  cout<<s.sum(4.5,5.7)<<endl;
  cout<<s.sum(4,5,7)<<endl;
	return 0;
}
