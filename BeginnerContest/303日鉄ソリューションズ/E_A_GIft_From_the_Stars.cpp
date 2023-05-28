// g++ 1.cpp -std=c++17 -O2 -I .
/*
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

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;cin>>n;
  vi deg(n,0);
  rep(i,0,n-1){
    int l,r;cin>>l>>r;
    l--;r--;
    deg[l]++;
    deg[r]++;
  }

  int one=0;

  rep(i,0,n){
    if(deg[i]==1)one++;
    //cout<<deg[i]<<" ";
  }

  sort(all(deg));
  int cnt=(n+2-one)/3;

  rep(i,n-cnt,n){
    cout<<deg[i]<<" ";
  }
}
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> deg(n, 0);
    vector<vector<int>> ddeg(n, vector<int>(2));
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        ddeg[i][0] = a;
        ddeg[i][1] = b;
        a--;
        b--;
        deg[a]++;
        deg[b]++;
    }
    vector<int> temp;
    set<int> st;
    for (int i = 0; i < n; i++) {
        if (deg[i] == 1){
            temp.push_back(i+1);
            cout << deg[i] << endl;
        }
    }
    

    for (int i = 0; i < n; i++ ) {
        for (int j = 0; j < temp.size(); j++) {
            if(ddeg[i][0] == temp[j]) {
                st.insert(ddeg[i][1]);
            }
            else if(ddeg[i][1] == temp[j]) {
                st.insert(ddeg[i][0]);
            }
        }
    }

    vector<int> ans;
    for (auto x : st) {
        ans.push_back(deg[x-1]);
        cout << x << endl;
    }
    sort(all(ans));
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << ' ';
    }


}