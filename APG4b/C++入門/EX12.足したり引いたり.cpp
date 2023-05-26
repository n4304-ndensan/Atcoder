#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  int ans = 1;
  // ここにプログラムを追記
  for (int i = 1; i < S.size(); i+=2) {
    if (S.at(i) == '+') {
      ans ++; 
    }
    else if (S.at(i) == '-') {
      ans --;
    }
  }
  cout << ans << endl;
}