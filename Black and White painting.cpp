#include<bits/stdc++.h>
using namespace std; 
#define mod 1000000007
#define INF 0x3f3f3f3f
#define all(x) (x).begin(),(x).end()
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl "\n" 
#define pb push_back
#define rep(i,a,n) for (int i=a;i<n;i++)
#define per(i,a,n) for (int i=n-1;i>=a;i--)
#define mp make_pair
#define print(v); for(auto x:v) cout<<x<<" "; cout<<endl;
typedef long long int ll;
int main()
{
    fast;
    ll n, m, c;
    while(true){
        cin >> n >> m >> c;
        if(n == 0 && m == 0 && c == 0){
            break;
        }
        ll row = m - 8 + 1;
        ll col = n - 8 + 1;
        ll possible = row * col;
        if(n >= 8 && m >= 8){
            if(c == 1){
                ll ans = (possible % 2 == 0) ? possible / 2 : (possible / 2) + 1;
                cout << ans << endl;
            }
            else{
                ll ans = possible / 2;
                cout << ans << endl;
            }
        }
    }


    return 0;
}