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
    int n, Y, x, y, z;
    cin >> n >> Y;
    x = -1; y = -1; z = -1;
    rep(i, 0, n+1){
        rep(j, 0, n-i+1){
            rep(k, 0, n-i-j+1){
                if((10000*i + 5000*j + 1000*k == Y) && (i+j+k==n)){
                    x = i; y = j; z = k;
                    break;
                }
            }
        }
    }
    cout << x << ' ' << y << ' ' << z << endl;
}