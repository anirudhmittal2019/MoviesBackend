#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
void solve(){
    int n;
    cin >> n;
    if(n%2==0){
        cout<<"-1\n";
        return;
    }
    int f=0;
    vector<int> a;
    for(int i=29;i>0;i--){
        if((n>>i)&1){
            f=1;
            a.push_back(2);
        }
        else if(f){
            a.push_back(1);
        }
    }
    cout<<a.size()<<"\n";
    for(auto &i : a) cout<<i<<" ";
    cout<<"\n";
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