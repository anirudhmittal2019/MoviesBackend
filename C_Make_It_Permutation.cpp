#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
void solve(){
    int n,a,b;
    cin >> n >> a >> b;
    vector<int> arr(n);
    set<int> s;
    ll sol=0,ans=2e18;
    int p[100005];
    for(int i=1;i<=n;i++){
        int x;
        cin >> x;
        if(s.find(x)==s.end()){
            s.insert(x);
        }
        else{
            sol+=a;
        }
    }
    int c=0;
    for(auto &i:s){
        p[++c]=i;
    }
    for(int i=1;i<=c;i++){
        ans=min(ans,1LL*(p[i]-i)*b+1ll*(c-i)*a);
    }
    ans=min(ans,1LL*c*a+b);
    cout<<ans+sol<<"\n";
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