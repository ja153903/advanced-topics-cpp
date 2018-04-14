#include <bits/stdc++.h>

using namespace std;

int main() {
  list<int> numbers;
  
  numbers.push_back(1);
  numbers.push_back(2);
  numbers.push_back(3);
  numbers.push_front(0);
  
  list<int>::iterator it = numbers.begin();
  it++;
  numbers.insert(it, 100);
  cout << "Inserted: " << *it << endl;
  
  list<int>::iterator erase = numbers.begin();
  erase++;
  erase = numbers.erase(erase);
  cout << "Deleted: " << *erase << endl;

  // can only go through items one at a time
  for (list<int>::iterator it = numbers.begin(); it != numbers.end(); it++) {
    cout << *it << endl;
  }


  return 0;
}
