#include <iostream>
#include <algorithm>
using namespace std;
int a[100002];
int b[100002];
int main() { 
  int n;
  cin >> n;
  int minPerson = 200000;
  for (int i = 0; i < n ; i++) {
    cin >> a[i] >> b[i];
    
    if(a[i] +b[i] < minPerson) {
      minPerson = a[i] +b[i];
    }
  }
  
  int minDifferentP = a[0] + b[1];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i == j) continue;
      if (max(a[i],b[j]) < minDifferentP) {
        minDifferentP = max(a[i],b[j]);
      }
    }
  }
  if (minPerson < minDifferentP) {
    cout << minPerson << endl;
  } else {
    cout <<  minDifferentP << endl;
  }
  
}
