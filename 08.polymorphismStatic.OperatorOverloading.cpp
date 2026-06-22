#include <bits/stdc++.h>
using namespace std;

class Complex{
public:
  int real,imag;
  Complex() { real = imag = -1;}
  Complex(int r,int i){
    this->real = r,this->imag = i;
  }
/// **†+ operator overloading 
  Complex operator+(const Complex & b){
    Complex res;
    res.real = this->real + b.real;
    res.imag = this->imag +  b.imag;
    return res;
  }
  // *** - as operator overloading 
  Complex operator-(const Complex & b){
    Complex res;
    res.real = this->real - b.real;
    res.imag = this->imag -  b.imag;
    return res;
  }
// = as operator overloading 
  
  bool operator==(const Complex & b){
    return (this->real==b.real && this->imag==b.imag)? true:false;
  }
  void display(){
    cout<<"Your complex number is : "<<this->real<<" + "<<this->imag<<"i"<<endl;
  }
};
int main() {
  int a1,b1;
  cin>>a1>>b1;
  Complex a(4,4);
  a.display();
  int a2,b2;
  cin>>a2>b2;
  Complex b(4,4);
  b.display();
  Complex c = a+b;//addition of complex numbers 
  c.display();
  Complex d = a-b;//substraction of complex numbers 
  d.display();
  bool cheak = a==b;// cheak two complex numbers are same or not
  cout<<cheak<<endl;
  return 0;
}
