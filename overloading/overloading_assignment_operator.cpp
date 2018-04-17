#include <bits/stdc++.h>

using namespace std;

class Test {
private:
  int id;
  string name;
public:
  Test(): id(0), name("") {}
  Test(int id, string name): id(id), name(name) {}
  Test(const Test& other) {
    cout << "Copy constructor running" << endl;
    id = other.id;
    name = other.name;
  }
  void print() {
    cout << id << ", " << name << endl;
  }
  const Test& operator=(const Test& other) {
    cout << "Operator overloading running" << endl;
    id = other.id;
    name = other.name;
    return *this; // dereference this
  }
  friend ostream& operator<<(ostream& output, Test& test) {
    output << test.id << ", " << test.name;
    return output;
  }
};

int main() {
  Test test1(10, "Mike");
  cout << test1 << endl;
  
  Test test2(20, "Bob");
  cout << test2 << endl;
  
  // this is a shallow copy
  test2 = test1;
  cout << test2 << endl;

  Test test3;
  test3 = test2 = test1;

  //test3.operator=(test2);
  //test3.print();

  cout << test3 << endl;

  // this is copy initialization (different from overloading)
  Test test4 = test3;
  cout << test4 << endl;
  return 0;
}
