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

/*
解説
#include <bits/stdc++.h>
using namespace std;

bool sim(char c, char d) {
    return c == d or (c == '0' and d == 'o') or (c == 'o' and d == '0') or (c == 'l' and d == '1') or (c == '1' and d == 'l');
}

int main() {
    int n;
    string s, t;
    cin >> n >> s >> t;
    bool string_sim = 1;
    for(int i = 0; i < n; i++) string_sim &= sim(s[i], t[i]);
    cout << (string_sim ? "Yes\n" : "No\n");
}

*/