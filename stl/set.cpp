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
  string getName() { return name; }
  int getAge() { return age; }
  // a set is ordered
  // so to add a Person object to the set, we have to have some type of comparison
  bool operator<(const Person& other) const {
    return name < other.name;
  }
};

int main() {
  set<int> numbers;

  numbers.insert(4);
  numbers.insert(4);

  for (auto el : numbers)
    cout << el << endl;

  set<Person> people;

  people.insert(Person("Jaime", 23));
  people.insert(Person("Jenny", 23));
  people.insert(Person("Alex", 21));

  for (auto person : people) {
    cout << person.getName() << ", " << person.getAge() << endl;
  }
  return 0;
}
