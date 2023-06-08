'''
解説
url : https://blog.hamayanhamayan.com/entry/2016/08/29/141910

DP
using ll = long long;
int N, A;
int x[50];
ll dp[51][51][3010];

int main() {
    cin >> N >> A;
    rep(i, 0, N) cin >> x[i];

    dp[0][0][0] = 1;
    rep(i, 0, N) rep(j, 0, N) rep(k, 0, 2500) if (dp[i][j][k]){
        dp[i + 1][j][k] += dp[i][j][k];
        dp[i + 1][j + 1][k + x[i]] += dp[i][j][k];
    }

    ll ans = 0;
    rep(i , 1, N + 1) ans += dp[N][i][i*A];
    cout << ans << endl;
}
'''
#include <bits/stdc++.h>
using namespace std;

using ll = unsigned long long;
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
    int N;
    ld A;
    vi card;
    cin >> N >> A;
    ll ans = 0;
    rep(i, 0, N){
        int x;
        cin >> x;
        card.pb(x);
    }
    unsigned int result = 1 << N;
    cout << result << endl;

    for(int bit = 0; bit < result; ++bit){
        vi S;
        rep(i, 0, N){
            if(bit & (1<<i)){
                S.pb(i);
            }
        }

        ld sum = 0;
        rep(i, 0, S.size()){
            sum += card[S[i]];
        }
        if(S.size() != 0){
            if(sum / S.size() == A){
                ans++;
            }
        }
    }

    cout << ans << endl;
}
