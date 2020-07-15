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

ll C(ll n, ll r){
    if(n < 0){
        return 0;
    }
    if(r == 3){
        return (n * (n - 1) * (n - 2)) / (3 * 2);
    }
    return (n * (n - 1)) / 2;
}

int main()
{
    fast;
    ll t;
    cin >> t;
    while(t--){
        ll n, b1, b2;
        cin >> n >> b1 >> b2;
        if(b1 > b2) swap(b1, b2);
        // cout << "b1: " << b1 << " b2: " << b2 << endl;
        ll dist1 = b2 - b1 - 1; ll dist2 = n - b2 + b1 - 1;
        // cout << "dist1: " << dist1 << " dist2: " << dist2 << endl;
        cout << C(dist1, 3) + C(dist2, 3) + C(dist1, 2) * dist2 + C(dist2, 2) * dist1 << endl;
    }


    return 0;
}