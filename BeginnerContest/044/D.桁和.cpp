'''
解説
url : https://blog.hamayanhamayan.com/entry/2016/08/29/152022

解説を見てもわからない。 2023/06/08
#define INF 1LL<<60
typedef long long ll;
ll N, S;
ll f(ll b, ll n) {
	if (b < 2) return INF;
	ll ret = 0;
	while (n >= b) ret += n % b, n /= b;
	return ret + n;
}
//-----------------------------------------------------------------
ll solve() {
	if (N == S) return N + 1; 
	ll ans = INF;

	// 全探索1
	rep(B, 2, sqrt(N) + 1) if (f(B, N) == S) ans = min(ans, (ll)B);
	// 全探索2
	rep(p, 1, sqrt(N)) {
		ll B = (N - S) / p + 1;
		if (f(B, N) == S) ans = min(ans, B);
	}

	if (ans == INF)
		return -1;
	else
		return ans;
}
//-----------------------------------------------------------------
int main() {
	cin >> N >> S;
	cout << solve() << endl;
}
'''
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

int f(int b , int n){
    int sum = 0;
    if(b < n) return n;
    else return f(b, (n / b)) + (n % b);
}

int main() {
    int n, s;
    cin >> n >> s;
    int ans = -1
    int i = 2;
    while(true){
        if(s == f(i, n)){
            ans = i;
            break;
        }
        else if ( s < f(i, n)){
            break;
        }
    }

    cout << ans << endl;
}