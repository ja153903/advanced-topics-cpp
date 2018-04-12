#include <bits/stdc++.h>

using namespace std;
void mightGoWrong() {
  bool error1 = false;
  bool error2 = true;

  if (error1) {
    throw "Something went wrong";
  }
  
  // this won't occur if error1 is true
  // you go straight out of your function when you throw
  if (error2) {
    throw string("Something else went wrong");
  }
}

void usesMightGoWrong() {
  mightGoWrong();
}

int main() {
  try{
    usesMightGoWrong();
  } catch (int e) {
    cout << "Error code: " << e << endl;
  } catch (char const * e) {
    cout << "Error message: " << e << endl;
  } catch (string e) {
    cout << "String error message: " << e << endl;
  }
  return 0;
}
