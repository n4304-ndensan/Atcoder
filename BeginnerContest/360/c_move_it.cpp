#include <bits/stdc++.h>
#include <string>
using namespace std;

using ll = long long;
using ld = long double;

using vi = vector<int>;
using vvi = vector<vi>;
using vll = vector<ll>;
using vvll = vector<vll>;
using vld = vector<ld>;
using vvld = vector<vld>;
using vst = vector<string>;
using vvst = vector<vst>;

#define fi first
#define se second
#define pb push_back
#define eb emplace_back
#define pq_big(T) priority_queue<T, vector<T>, less<T>>
#define pq_small(T) priority_queue<T, vector<T>, greater<T>>
#define all(a) a.begin(), a.end()
#define rep(i, start, end) for (ll i = start; i < (ll)(end); i++)
#define per(i, start, end) for (ll i = start; i >= (ll)(end); i--)
#define uniq(a) sort(all(a)); a.erase(unique(all(a)), a.end())

int main() {
    int N;
    cin >> N;
    vi A(N), W(N);
    vi M(N, 0);

    rep(i, 0, N) {
        cin >> A[i];
    }
    rep(i, 0, N) {
        cin >> W[i];
    }
    rep(i, 0, N) {
        A[i]--;
        M[A[i]] = max(M[A[i]], W[i]);
    }

    int sum = accumulate(all(W), 0);
    int max_sum = accumulate(all(M), 0);
    cout << sum - max_sum << endl;
}

/*
int main() {
    int N, ans = 0;
    vi A;

    cin >> N;
    vi Counter(N);
    vvi W(N);
    rep(i, 0, N) {
        int a;
        cin >> a;
        Counter[a - 1]++;
        A.pb(a);
    }
    rep(i, 0, N) {
        int w;
        cin >> w;
        W[A[i] - 1].pb(w);
    }

    // 全ての要素を一度にソート
    rep(i, 0, N) {
        sort(all(W[i]));
    }

    // Counterが0の要素に対して処理を行う
    vi zero_indices, more_than_one_indices;
    rep(i, 0, N) {
        if (Counter[i] == 0) {
            zero_indices.pb(i);
        } else if (Counter[i] > 1) {
            more_than_one_indices.pb(i);
        }
    }

    for (int i : zero_indices) {
        for (int j : more_than_one_indices) {
            if (Counter[j] > 1) {
                Counter[j]--;
                Counter[i]++;
                int w = W[j][0];
                ans += w;
                W[i].pb(w);
                W[j].erase(W[j].begin());
                if (Counter[j] == 1) {
                    more_than_one_indices.erase(find(all(more_than_one_indices), j));
                }
                break;
            }
        }
    }

    cout << ans << endl;
}
*/
