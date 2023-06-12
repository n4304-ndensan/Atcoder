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
#define pq_big(t) priority_queue<t,vector<t>,less<t>>
#define pq_small(t) priority_queue<t,vector<t>,greater<t>>
#define all(a) a.begin(),a.end()
#define rep(i,start,end) for(ll i=start;i<(ll)(end);i++)
#define per(i,start,end) for(ll i=start;i>=(ll)(end);i--)
#define uniq(a) sort(all(a));a.erase(unique(all(a)),a.end())

int main() {
    int h, w, a, b, c, d;
    a = 501;
    c = 501;
    b = 0;
    d = 0;
    int x, y;
    cin >> h >> w;
    vector<vector<char>> cookiemap(h, vector<char>(w));
    rep(i, 0, h){
        rep(j, 0, w){
            cin >> cookiemap[i][j];
            if(cookiemap[i][j] == '#'){
                if(a > i){
                    a = i;
                }
                if(b < i){
                    b = i;
                }
                if(c > j){
                    c = j;
                }
                if(d < j){
                    d = j;
                }
            }
        }
    }

    rep(i, 0, h){
        rep(j, 0, w){
            if(a <= i && i <= b && c <= j && j <= d){
                if(cookiemap[i][j] == '.'){
                    x = i;
                    y = j;
                }
            }
        }
    }

    cout << x+1 << " " << y+1 << endl;


}