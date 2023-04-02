#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
void solve(){
    char arr[8][8];
    int a,b;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            cin>>arr[i][j];
            if(arr[i][j]=='*'){
                a=i,b=j;
            }
        }
    }
    cout<<((char)('a'+b))<<(8-a);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
//  cin >> t;
    while(t--){
        solve();
    }
    return 0;
}