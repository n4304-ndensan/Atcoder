#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    string S, T;
    bool ans = true;
    cin >> N;
    cin >> S;
    cin >> T;
    
    for (int i = 0; i < N; i++) {
        if (S.at(i) == T.at(i)) {
            continue;
        }
        else if (((S.at(i) == '1') & (T.at(i) == 'l'))) {
            continue;
        }
        else if (((T.at(i) == '1') & (S.at(i) == 'l'))) {
            continue;
        }
        else if (((S.at(i) == '0') & (T.at(i) == 'o'))) {
            continue;
        }
        else if (((T.at(i) == '0') & (S.at(i) == 'o'))) {
            continue;
        }
        else {
            ans = false;
            break;
        }
    }

    if (ans) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
}