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
    ll H, W, N;
    cin >> H >> W >> N;
    vvll mp(H-2, vll(W-2, 0));
    rep(i, 0, N){
        ll a, b;
        vi x, y;
        cin >> a >> b;
        if(a==1) x.pb(a-1);
        else if(a==H) x.pb(H-3);
        else if(H==3){
            if(a==2){
                x.pb(0);
            }
        }
        else if(H!=3){
            if(a==2){
                x.pb(0);
                x.pb(a-1);
            }
            else if(a==H-1){
                x.pb(H-3);
                x.pb(H-4);
            }
            else if(a > 2){
                x.pb(a-3);
                x.pb(a-2);
                x.pb(a-1);
            }
        }

        if(b==1) y.pb(b-1);
        else if(b==W) y.pb(W-3);
        else if(W==3){
            if(b==2){
                y.pb(0);
            }
        }
        else if(W!=3){
            if(b==2){
                y.pb(0);
                y.pb(b-1);
            }
            else if(b==W-1){
                y.pb(W-3);
                y.pb(W-4);
            }
            else if(b > 2){
                y.pb(b-3);
                y.pb(b-2);
                y.pb(b-1);
            }
        }
        for(auto xx : x){
            for(auto yy : y){
                mp[xx][yy]++;
            }
        }
    }

    vi ans(10);

    rep(i, 0, H-2){
        rep(j, 0 , W-2){
            ans[mp[i][j]]++;
        }
    }

    rep(i, 0, 10){
        cout << ans[i] << endl;
    }
}