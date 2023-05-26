#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C;
  cin >> A >> B >> C;
  int mx, mn;
  mx = max(max(A, B), C);
  mn = min(min(A, B), C);
  cout << mx - mn << endl;
}