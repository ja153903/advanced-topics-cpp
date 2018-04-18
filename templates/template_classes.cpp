#include <bits/stdc++.h>

using namespace std;


template<class T>
class Test {
private:
  T obj;

public:
  Test(T obj) {
    this->obj = obj;
  }

  void print() { 
    cout << obj << endl;
  }

};



int main() {

  Test<string> test1("string object");
  test1.print();

  return 0;
}
