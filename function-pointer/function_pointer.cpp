#include <bits/stdc++.h>

using namespace std;

int add(int a, int b) { return a + b; }

int main() {
  cout << add(3, 4) << endl;
  
  int (*ptr_add)(int, int) = add;

  cout << ptr_add(3, 4) << endl;


  return 0;
}
