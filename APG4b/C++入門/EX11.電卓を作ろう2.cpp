#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, A;
    cin >> N >> A;

    for (int i = 1; i <= N; i++) {
        string op;
        int j;
        cin >> op >> j;
        if (op == "+") {
            A += j;
        }
        else if (op == "-") {
            A -= j;
        }
        else if (op == "*") {
            A *= j;
        }
        else if (op == "/") {
            if (j == 0) {
                cout << "error" << endl;
                break;
            }
            A /= j;
        }
        cout << i << ":" << A << endl;
    }
}