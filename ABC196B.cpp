#include <cstring>
#include <iostream>
using namespace std;
char s[202];
int main() {
  cin >> s;
  int len = strlen(s);
  for (int i = 0; i < len; i++) {
    if (s[i] != '.') {
      cout << s[i];
    } else
      break;
  }
  cout << endl;

  return 0;
}