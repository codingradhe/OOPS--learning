// 🖊️🖊️🖊️when you call derived class then first parent class constructor is called and then child class constructor called;
// 🖊️🖊️🖊️when you call derived class then first child class destructor is called and then parent class constructor called;
#include <bits/stdc++.h>
using namespace std;

class vehicle {
public:
  string name;
  string model;
  int noOfTyers;
  vehicle(string name1, string model1, int noOfTyers1) {
    cout << "i am inside vehicle ctor\n";
    name = name1;
    model = model1;
    noOfTyers = noOfTyers1;
  }
  void startEngine() {
    cout << "engine is starting " << name << " " << model << endl;
  }
  void stopEngine() {
    cout << "engine is stopping " << name << " " << model << endl;
  }
};
class car : public vehicle {
protected:
    int noOfDoors;
    string transmissionType;
public:
  car(string name1, string model1, int noOfTyers1,int noOfDoors1, string transmissionType1)
    : vehicle(name1, model1, noOfTyers1) {
    cout << "i am inside car ctor\n";
    transmissionType = transmissionType1;
    noOfDoors = noOfDoors1;
  }
  void startAC() {
    cout << "AC has started " << name << endl;
  }
};
class bike : public vehicle {
public:
  string handleBarStyle;
  string suspentionType;
public:
  bike(string name1, string model1, int noOfTyers1,string handleBarStyle1, string suspentionType1): vehicle(name1, model1, noOfTyers1) {
    cout << "i am inside bike ctor\n";
    handleBarStyle = handleBarStyle1;
    suspentionType = suspentionType1;
  }
  void bikeWheelie() {
    cout << " bike is running  " << name << endl;
  }
};
int main() {
  car a("maruti 800", "xxv", 4, 4, "manual");
  a.startEngine();
  a.startAC();
  a.stopEngine();
  
  bike b("BNW","VXI",2,"U","hard");
  b.startEngine();
  b.bikeWheelie();
  b.stopEngine();
  cout<<b.handleBarStyle<<endl;
  return 0;
}
