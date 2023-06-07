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
    int x = 0;
    int y = 0;
    int t = 0;
    bool can = true;
    rep(i, 0, n){
        int abc, tt, xx , yy, time;
        cin >> tt >> xx >> yy;
        abc = abs(xx - x) + abs(yy - y);
        time = tt - t;
        if((time >= abc) && ((time%2) == (abc%2))){
            x = xx;
            y = yy;
            t = tt;
        }
        else {
            can = false;
            break;
        }
        
    }

    if(can) cout << "Yes" << endl;
    else cout << "No" << endl;
}