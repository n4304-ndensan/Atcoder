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
    ll sx, sy, tx, ty;
    cin >> sx >> sy >> tx >> ty;

    int vec;
    if ((sx % 2 == 0 and sy % 2 == 0) or (sx % 2 == 1 and sy % 2 == 1)) {
        vec = 0;
    } else {
        vec = 1;
    }

    ll ax, ay;
    ax = tx - sx;
    ay = ty - sy;
    ll ansx = 0;
    ll ansy = abs(ay);
    if (ay == 0) {
        if (vec == 0) {
            if (ax > 0) {
                ansx = abs(ax) - 1;
            } else {
                ansx = abs(ax);
            }
        } else {
            if (ax > 0) {
                ansx = abs(ax);
            } else {
                ansx = abs(ax) - 1;
            }
        }
    } else {
        if (vec == 0) {
            if (ax > 0) {
                ansx = abs(ax) - (abs(ay) + 1);
            } else {
                ansx = abs(ax) - abs(ay);
            }
        } else {
            if (ax > 0) {
                ansx = abs(ax) - abs(ay);
            } else {
                ansx = abs(ax) - (abs(ay) + 1);
            }
        }
    }
    ansx = ansx / 2 + ansx % 2;
    if (ansx < 0) {
        ansx = 0;
    }
    cout << ansy + ansx << endl;
}
