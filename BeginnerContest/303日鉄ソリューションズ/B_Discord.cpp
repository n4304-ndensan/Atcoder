#include <bits/stdc++.h>
using namespace std;

int main() {
     int N, M;
     cin >> N >> M;
     vector<vector<int>> data(M, vector<int>(N));
     vector<vector<int>> ddata(N, vector<int>(N));

     for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            int n;
            cin >> n;
            data.at(i).at(j) = n;
        }
     }
     for (int i = 0; i < N; i++) {
         for (int j = 0; j < N; j++) {
             if (i == j) {
                 ddata.at(i).at(j) = -1;
             }
             else {
                ddata.at(i).at(j) = j;
             }
         }
     }

    int n = N-1;
     for (int i = 0; i < M; i++) {
        for (int j = 0; j < n; j++) {
            int f, s;
            f = data.at(i).at(j) -1;
            s = data.at(i).at(j+1) -1;
            ddata.at(f).at(s) = -1;
            ddata.at(s).at(f) = -1;
        }
     }
    
    int count = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << ddata.at(i).at(j);
            if (ddata.at(i).at(j) != -1) {
                count++;
            }
        }
        cout << endl;
    }

    cout << count / 2 << endl;
    
}