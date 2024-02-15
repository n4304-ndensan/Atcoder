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
    vst mas(n);
    
    rep(i, 0, n){
        cin >> mas[i];
    }

    rep(i, 0, n){
        rep(j, 0, n){
            if(i == 0){
                if(j == 0){
                    cout << mas[1][0];
                }
                else{
                    cout << mas[i][j-1];
                }
            }
            else if(i == n-1){
                if(j == n-1){
                    cout << mas[i-1][j];
                }
                else{
                    cout << mas[i][j+1];
                }
            }
            else if(j == 0){
                cout << mas[i+1][j];
            }
            else if(j == n-1){
                cout << mas[i-1][j];
            }
            else{
                cout << mas[i][j];
            }
        }
        cout << endl;
    }
}