#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> vec(100);
  int sum = 0;
  for (int i = 0; i < N; i++) {
    int num;
    cin >> num;
    vec[i] = num;
    sum += num;
  }
  int ave = sum / N;
  for (int i = 0; i < N; i++) {
    if (ave > vec[i]) {
        cout << ave - vec[i] << endl;
    }
    else {
        cout << vec[i] - ave << endl;
    }
  }
}