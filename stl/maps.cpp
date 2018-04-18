#include <bits/stdc++.h>

using namespace std;

int main() {
  map<string, int> ages;
  ages["Mike"] = 40;
  ages["Raj"] = 20;
  ages["Vicki"] = 30;
  
  pair<string, int> addToMap("Peter", 100);
  
  ages.insert(addToMap);
  
  ages.insert(make_pair("Jaime", 23)); 
 
  cout << ages.at("Raj") << endl;
  
  if (ages.find("Vicky") != ages.end()) {
    cout << "Found vicky" << endl;
  } else { 
    cout << "Key not found" << endl;
  }

  for (map<string, int>::iterator it = ages.begin(); it != ages.end(); it++) {
    pair<string, int> age = *it;
    cout << age.first << ", " << age.second << endl;
  }
 
  for (map<string, int>::iterator it = ages.begin(); it != ages.end(); it++) {
    cout << it->first << ", " << it->second << endl;
  }

  return 0;
}
