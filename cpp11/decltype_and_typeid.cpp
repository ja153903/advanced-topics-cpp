#include <bits/stdc++.h>

using namespace std;

int main() {
  string value;

  cout << typeid(value).name() << endl;

  // allows us to declare variables of an existing type
  // extracts type from value
  decltype(value) name = "Bob";

  cout << typeid(name).name() << endl;

  return 0;
}