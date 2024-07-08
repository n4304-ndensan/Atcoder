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
    int a, b, c, d, e, f, g, h, i, j, k, l;
    cin >> a >> b >> c >> d >> e >> f >> g >> h >> i >> j >> k >> l;
    bool x = false, y = false, z = false;

    rep(m, a, d) {
        rep(n, b, e) {
            rep(o, c, f) {
                if (g <= m && m < j && h <= n && n < k && i <= o && o < l) {
                    x = true;
                    break;
                }
            }
            if(x) {
                break;
            }
        }
        if(x) {
            break;
        }
    }
    if (x) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}

/*
int f(int l1,int r1,int l2,int r2) {
    if r1<l2 or r2<l1 {
        return false;
}

int main() {
    int x1, y1, z1, x2, y2, z2;
    int x3, y3, z3, x4, y4, z4;
    cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
    cin >> x3 >> y3 >> z3 >> x4 >> y4 >> z4;

    if (f(x1, x2, x3, x4) and f(y1, y2, y3, y4) and f(z1, z2, z3, z4) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
/*
