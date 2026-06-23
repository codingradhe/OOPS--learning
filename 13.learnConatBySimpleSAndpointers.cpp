// --> rvalue = variable having memory location;exp-- int x =5; 
// --> lvalue = variable having no memory location;exp-- int &a = b; 
//
//
//
#include <bits/stdc++.h>
using namespace std;

int main() {
  const int x = 10;
  cout<<x<<endl;
  // x = 5;-> give wrong we cant re- initialize const;
  
  // 2. const with pointer
  const int *x = 5;//same int const *a;         const-data but non-const pointer ;
  
  // 3. const-pointer but non-const data ;
  int *const a = new int(2);
  
  // 4. non-const-pointer but non-const data ;
  const int *const a = new int(5);
  return 0;
}
