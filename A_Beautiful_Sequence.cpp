#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &i : a) cin >> i;
    int ans = 1;
    for(int i=0;i<n;i++){
        if(a[i]<=ans){
            cout<<"YES\n";
            return;
        }
        ans++;
    }
    cout<<"NO\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}