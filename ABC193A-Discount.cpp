#include <iostream>
using namespace std;
int main() {
  int A, B;
  cin >> A >> B;
  cout << (double(A - B) / A) * 100 << endl;
  return 0;
}