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
    string s;
    cin >> s;
    ll x, y;
    x = -1;
    y = -1;
    bool a = false;

    rep(i, 2, 4){
        rep(j, 0, s.size()){
            string subs;;
            subs = s.substr(j, i);
            map<char, int> mp;
            for(auto xx : subs){
                if(mp.find(xx) != mp.end()){
                    mp[xx]++;
                    if(mp[xx] > i/2){
                        x = j + 1;
                        y = j + i;
                        a = true;
                    }
                }
                else{
                    mp[xx] = 1;
                }
                if(a){
                    break;
                }
            }
            if(a){
                break;
            }
        }
        if(a){
            break;
        }

    }

    cout << x << " " << y << endl;
}