#include <bits/stdc++.h>

using namespace std;

class Person {
private:
  string name;
  int age;
public:
  Person(): name(""), age(0)  {}
  Person(const Person &other) {
    cout << "Running Copy Constructor" << endl;
    name = other.name;
    age = other.age;
  }
  Person(string name, int age): name(name), age(age) {}
  void print() {
    cout << name << ", " << age << endl;
  }
};

int main() {
  map<int, Person> people;
  
  people[0] = Person("Mike", 40);
  people.insert(make_pair(55, Person("Bob", 45)));

  map<int, Person>::iterator it = people.begin();
  
  while (it != people.end()) {
   cout << it->first << " ";
   (it->second).print();
   it++;
  }

  return 0;
}
