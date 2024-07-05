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
    int n;
    ll t;
    cin >> n >> t;
    string s;
    cin >> s;
    vector<ll> x1, x2;
    for (int i = 0; i < n; ++i) {
        ll x;
        cin >> x;
        if (s[i] == '1')
            x1.push_back(x);
        else
            x2.push_back(x);
    }
    sort(x1.begin(), x1.end());
    sort(x2.begin(), x2.end());
    int l = 0, r = 0;
    ll ans = 0;
    for (int i = 0; i < (int)x1.size(); ++i) {
        while (l < (int)x2.size() && x2[l] < x1[i]) {
            l++;
        }
        while (r < (int)x2.size() && x2[r] <= x1[i] + 2 * t) {
            r++;
        }
        ans += r - l;
    }
    cout << ans << endl;
}

// int main() {
//     ll ant_count, time;
//     string vecs;
//     set<pair<int, int>> surechigai_ant;
//     cin >> ant_count >> time >> vecs;

//     rep(i, 0, ant_count) {
//         int ant_position;
//         cin >> ant_position;
//         if (vecs[i] == '1') {
//             pre(j, ant_position, time) {
//                 positive_ant_area[j].pb(i);
//             }
//         } 
//     }
// }
