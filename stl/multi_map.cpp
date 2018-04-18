#include <bits/stdc++.h>

using namespace std;

typedef multimap<int, string> mmis;

int main() {
  mmis lookup;

  lookup.insert(make_pair(30, "Mike"));
  lookup.insert(make_pair(10, "Vicki"));
  lookup.insert(make_pair(30, "Raj"));
  lookup.insert(make_pair(20, "Bob"));

  for (auto it = lookup.begin();
       it != lookup.end(); it++) {
    cout << it->first << ", " << it->second << endl;
  }

  for (auto it = lookup.find(20);
       it != lookup.end(); it++) {
    cout << it->first << ", " << it->second << endl;
  }

  cout << endl;

  // gets the range with which the value appears
  auto its = lookup.equal_range(30);

  for (auto it = its.first; it != its.second; it++) {
    cout << it->first << ", " << it->second << endl;
  }

  return 0;
}
