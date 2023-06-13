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
    string a, b, c;
    cin >> a >> b >> c;
    string* temp = &a;
    string ans;
    while(temp.size() != 0){
        ans = temp[0];
        temp = temp.erase(0, 1);
        cout << temp << endl;
        if("a" == ans) temp = &a;
        else if("b" ==ans) temp = &b;
        else temp = &c;
        
    }


    cout << ans << endl;
    if(ans == "a") cout << "A" << endl;
    else if(ans == "b") cout << "B" << endl;
    else cout << "C" << endl;
}