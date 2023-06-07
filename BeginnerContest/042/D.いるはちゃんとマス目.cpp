"""
解説（python)
#コンビネーション
def cmb(n, r):
    if (r < 0) or (n < r):
        return 0
    r = min(r, n - r)
    return fact[n] * factinv[r] * factinv[n-r] % mod

N = 2 * 10 ** 5 + 1000  # N は必要分だけ用意する
mod = pow(10, 9) + 7
fact = [1, 1]  # fact[n] = (n! mod p)
factinv = [1, 1]  # factinv[n] = ((n!)^(-1) mod p)
inv = [0, 1]  # factinv 計算用

for i in range(2, N + 1):
    fact.append((fact[-1] * i) % mod)
    inv.append((-inv[mod % i] * (mod // i)) % mod)
    factinv.append((factinv[-1] * inv[-1]) % mod)


h, w, a, b = map(int,input().split())
ans = 0
for i in range(h - a):
    ans += (cmb(b - 1 + i, i) * cmb(w - b -  1 + h - i - 1, w - b - 1)) % (10 ** 9 + 7)
print(ans % (10 ** 9 + 7))

むずくてわからなかった
"""
#include <iostream>
#include <vector>
#include <algorithm>
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

const ll MOD = 1000000007;

ll multiply(ll a, ll b) {
    return (a * b) % MOD;
}

ll power(ll base, ll exponent) {
    ll result = 1;
    while (exponent > 0) {
        if (exponent % 2 == 1) {
            result = multiply(result, base);
        }
        base = multiply(base, base);
        exponent /= 2;
    }
    return result;
}

ll factorial(int n, int s) {
    ll result = 1;
    for (int i = s; i <= n; i++) {
        result = multiply(result, i);
    }
    return result;
}

int main() {
    int H, W, A, B;
    cin >> H >> W >> A >> B;

    ll ans = 0;
    rep(i, 0, H - A) {
        int x = i;
        int y = B - 1;
        int x1 = H - i - 1;
        int y1 = W - B - 1;

        int max_xy = max(x, y);
        int min_xy = min(x, y);
        int max_x1y1 = max(x1, y1);
        int min_x1y1 = min(x1, y1);

        ll numerator = multiply(factorial(x + y, max_xy + 1), factorial(x1 + y1, max_x1y1 + 1));
        ll denominator = multiply(factorial(min_xy, 0), factorial(min_x1y1, 0));

        ans = (ans + numerator / denominator) % MOD;
    }

    cout << ans << endl;
    return 0;
}
