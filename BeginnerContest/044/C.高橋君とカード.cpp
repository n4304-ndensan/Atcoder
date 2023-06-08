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
