"""
解説
https://atcoder.jp/contests/abc305/editorial/6541

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    using namespace std;

    unsigned N;
    cin >> N;
    vector<unsigned> A(N), fA(N);
    for (auto &&a : A)
        cin >> a;

    // fA[i] := A[i] 分までに何分寝たか
    for (unsigned i = 1; i < N; ++i)
        if (i % 2 == 0)
            fA[i] = fA[i - 1] + A[i] - A[i - 1];
        else
            fA[i] = fA[i - 1];

    unsigned Q;
    cin >> Q;

    // f(x) := x 分までに何分寝たか
    auto f{[&A, &fA](auto x) -> unsigned {
        const auto j = upper_bound(begin(A) + 1, end(A), x) - begin(A) - 1;
        return fA[j] + (fA[j + 1] - fA[j]) / (A[j + 1] - A[j]) * (x - A[j]);
    }};
    for (unsigned i = 0; i < Q; ++i) {
        unsigned l, r;
        cin >> l >> r;
        cout << f(r) - f(l) << endl;
    }

    return 0;
}

"""
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
    int n, q;
    cin >> n;
    vi sleep(n);
    rep(i, 0, n){
        cin >> sleep[i];
    }
    cin >> q;
    vi ans;
    rep(j, 0, q){
        int a , b, c;
        c = 0;
        cin >> a >> b;
        for(int i=1; i < n; i+=2){
            if(!(a >= sleep[i+1] || b <= sleep[i])){
                if(a <= sleep[i] && b <= sleep[i+1]){
                    c += b - sleep[i];
                }
                else if(a <= sleep[i] && b >= sleep[i+1]){
                    c += sleep[i+1] - sleep[i];
                }
                else if(sleep[i] <= a && a <= sleep[i+1] && b <= sleep[i+1]){
                    c += b - a;
                } 
                else if(sleep[i] <= a && a <= sleep[i+1] && b >= sleep[i+1]){
                    c += sleep[i+1] - a;
                }
            }
            else if(b <= sleep[i]){
                break;
            }
        }
        ans.pb(c);
    }

    rep(i, 0, q){
        cout << ans[i] << endl;
    }

}