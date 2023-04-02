#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
void solve(){
    int n;
    cin >> n;
    string s;
    cin>>s;
    bool alternating = true;
    for (int i = 1; i < n; i++) {
        if (s[i] == s[i-1]) {
            alternating = false;
            break;
        }
    }
    if (alternating) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
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