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
    int n;
    cin >> n;
    vst data(n);
    rep(i, 0, n){
        cin >> data[i];
    }

    bool xxx = false;
    rep(i, 0, n){
        rep(j, i+1, n){
            string a, b;
            a = data[i] + data[j];
            reverse(all(a));
            b = data[i] + data[j];
            if(a == b){
                xxx = true;
            }
            a = data[j] + data[i];
            b = data[j] + data[i];
            reverse(all(a));
            if(a == b) xxx = true;
        }
    }
    if(xxx) cout << "Yes";
    else cout << "No";
}