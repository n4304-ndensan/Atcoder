#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M, H, K;
    cin >> N >> M >> H >> K;
    string S;
    cin >> S;
    vector<pair<int, int>> data(M);
    pair<int, int> zahyo = make_pair(0, 0);
    for (int i = 0; i < M-1; i++) {
        int x, y;
        cin >> x >> y;
        data[i].first = x;
        data[i].second = y;
    }

    bool ans = true;

    for (int i = 0; i < N; i++) {
        if (S.at(i) == 'R') {
            H--;
            zahyo.first++;
            for (int j = 0; j < M; j++) {
                if (zahyo == data.at(j)){
                    if (H < K) {
                        data.erase(data.begin() + j);
                        H = K;
                    }

                }
            }
        }
        else if (S.at(i) == 'L'){
            H--;
            zahyo.first--;
            for (int j = 0; j < M; j++) {
                if (zahyo == data.at(j)){
                    if (H < K) {
                        data.erase(data.begin() + j);
                        H = K;
                    }

                }
            }
        }
        else if (S.at(i) == 'U'){
            H--;
            zahyo.second++;
            for (int j = 0; j < M; j++) {
                if (zahyo == data.at(j)){
                    if (H < K) {
                        data.erase(data.begin() + j);
                        H = K;
                    }

                }
            }
        }
        else if (S.at(i) == 'D'){
            H--;
            zahyo.second--;
            for (int j = 0; j < M; j++) {
                if (zahyo == data.at(j)){
                    if (H < K) {
                        data.erase(data.begin() + j);
                        H = K;
                    }

                }
            }
        }

        if (H < 0) {
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