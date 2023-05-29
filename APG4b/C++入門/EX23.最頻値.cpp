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
    ll n;
    map<ll, ll> data;
    cin >> n;
    rep(i, 0, n){
        ll a;
        cin >> a;
        if(data.count(a)) {
            data[a]++;
        }
        else {
            data[a] = 1;
        }
    }

    ll max = 0;
    ll maxKey;
    for(pair<ll, ll> p : data) {
        if(max < p.second){
            max = p.second;
            maxKey = p.first;
        }
    }

    cout << maxKey << ' ' << max;
    
    
}