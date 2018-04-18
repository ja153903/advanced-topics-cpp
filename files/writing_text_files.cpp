#include <bits/stdc++.h>

using namespace std;

int main() {
  ofstream outFile;
  string outputFileName = "test.txt";
  outFile.open(outputFileName);
  if (outFile.is_open()) {
    outFile << "Hello there";
    outFile.close();
  } else {
    cout << "Could not create file: " << outputFileName << endl;
  }
  return 0;
}
