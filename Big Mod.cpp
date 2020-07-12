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

ll calPower(ll b, ll p, ll m){
    if(p == 0){
        return 1;
    }
    if(p % 2 == 0){
        ll y = calPower(b, p / 2, m) % m;
        return ((y % m) * (y % m)) % m;
    }
    else{
        ll y = ((b % m) * (calPower(b, p - 1, m) % m)) % m;
        return y;
    }
}

int main()
{
    fast;
    ll b, p, m;
    while(cin >> b >> p >> m){
        if(m == 1){
            cout << 0 << endl;
        }
        else{
            ll ans = calPower(b, p, m);
            cout << ans << endl;
        }
    }


    return 0;
}