#include <bits/stdc++.h>
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
#define pq_big(T) priority_queue<T,vector<T>,less<T>>
#define pq_small(T) priority_queue<T,vector<T>,greater<T>>
#define all(a) a.begin(),a.end()
#define rep(i,start,end) for(ll i=start;i<(ll)(end);i++)
#define per(i,start,end) for(ll i=start;i>=(ll)(end);i--)
#define uniq(a) sort(all(a));a.erase(unique(all(a)),a.end())

int main() {
    ll n, k;
    cin >> n >> k;
    vll a(n);
    rep(i, 0, n) {
        cin >> a[i];
    }
    sort(all(a));
    ll ans = 2e9;
    rep(i, 0, k+1) {
        ans = min(ans, a[i + (n - k) - 1] - a[i]);
    }
    cout << ans << endl;
}

// int main() {
//     ll n, k;
//     cin >> n >> k;
//     vll a(n);
//     rep(i, 0, n) {
//         cin >> a[i];
//     }
//     // ソート
//     sort(all(a));
//     rep(i, 0, k) {
//         if (a[1] - a[0] < a[n-1] - a[n-2]) {
//             a.erase(a.begin() + n - 1);
//         } else {
//             a.erase(a.begin());
//         }
//         n--;
//     }
//     cout << a[n] - a[0] << endl;
// }
