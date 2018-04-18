#include <bits/stdc++.h>

using namespace std;

class Person {
private:
  string name;
  int age;
public:
  Person(): name(""), age(0) {}
  Person(string name, int age): name(name), age(age) {}
  Person(const Person& other) {
    name = other.name;
    age = other.age;
  }

  void print() const{
    cout << name << ", " << age;
  }

  bool operator<(const Person &other) const {
    if (name == other.name) {
      return age < other.age;
    }
    return name < other.name;
  }

};

int main() {
  map<Person, int> people;
  
  people[Person("Mike", 40)] = 40;
  people[Person("Mike", 440)] = 440;
  people[Person("Sue", 30)] = 30;
  people[Person("Raj", 20)] = 20;
  
  for (map<Person, int>::iterator it = people.begin(); it != people.end(); it++) {
    cout << it->second << ": ";
    it->first.print(); // this is not possible because keys are const unless print is marked const
    cout << endl;
  }
 
  return 0;
}
