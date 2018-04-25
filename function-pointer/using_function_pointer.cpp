#include <bits/stdc++.h>

using namespace std;

bool match(string text) {
  return text.size() == 3;
}

int countStrings(vector<string> &texts, bool (*match)(string test)) {
  int count = 0;
  for (auto str : texts) {
    if (match(str))
      count++;
  }
  return count;
}

int main() {
  vector<string> texts;
  texts.push_back("one");
  texts.push_back("two");
  texts.push_back("three");
  texts.push_back("four");


  cout << countStrings(texts, match) << endl;
  
  return 0;
}
