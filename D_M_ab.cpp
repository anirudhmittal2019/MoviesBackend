#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
bool check(ll x,ll n){
    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=n;j++){
            if(i*j==x){
                return true;
            }
        }
    }
    return false;
}
void solve(){
    ll n,m;
    cin >> n >> m;
    if(n*n<m){
        cout<<"-1\n";
        return;
    }
    for(ll i=m;i<=n*n;i++){
        if(check(i,n)){
            cout<<i;
            return;
        }
    }
    cout<<"-1\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
   // cin >> t;
    while(t--){
        solve();
    }
    return 0;
}