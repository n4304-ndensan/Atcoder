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
    int N, K;
    cin >> N >> K;
    vi kaisu(N);
    vi kazu(N);
    rep(i, 0, N){
        cin >> kaisu[i] >> kazu[i];
    }

    bool ans = true;
    int ansint = 0;
    int index;
    while (true)
    {
        auto maxElement = max_element(all(kazu));
        ll mx = *maxElement;
        if(K < mx){
            auto mielem = min_element(all(kaisu));
            ll mi = *mielem;

            ans = false;

            rep(i, 0, N){
                if(kaisu[i] == mi){
                    kaisu.erase(kaisu.begin() + i);
                    kazu.erase(kazu.begin() + i);
                }
            }
            index = mi;
        }
        else{
            ll sum = accumulate(all(kazu), 0);
            auto mielem = min_element(all(kaisu));
            ll mi = *mielem;


            if(K >= sum){
                ansint = index + 1;
                break;
            }
            ans = false;

            rep(i, 0, N){
                if(kaisu[i] == mi){
                    kaisu.erase(kaisu.begin() + i);
                    kazu.erase(kazu.begin() + i);
                }
            }
            index = mi;
        }
    }

    if(ans){
        cout << 1;
    }
    else{
        cout << ansint;
    }

}