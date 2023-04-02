#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
/* You are given a sequence of 
N numbers: A=(A1,…,AN).Determine whether there is a pair (i,j) with 1≤i,j≤N such that Ai​−Aj=X.
*/
void solve(){
    int n,x;
    cin >> n>>x;
    vector<int> a(n);
    for(auto &i : a) cin >> i;
    set<int> s;
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
        s.insert(a[i]);
        if(s.find(a[i]+x)!=s.end()||s.find(a[i]-x)!=s.end()){
            cout<<"Yes\n";
            return;
        }
    }  
    cout<<"No\n";  
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
//    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}