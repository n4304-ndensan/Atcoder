#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<pair<int, int>> data(N);
    for (auto x : data) {
        int a, b;
        cin >> a >> b;
        x.first = a;
        x.second = b;
    }

    sort(data.begin(), data.end());
    for (auto x : data) {
        cout << x.first;
        cout << ' ';
        cout << x.second << endl;
    }
}