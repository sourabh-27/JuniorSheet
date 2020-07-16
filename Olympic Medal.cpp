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
    ll n; cin >> n;
    long long X[n + 1];
    ll maxR1 = 0;
    for(ll i = 0; i < n; i++){
        cin >> X[i];
        maxR1 = max(maxR1, X[i]);
    }

    ll m; cin >> m;
    long long Y[m + 1];
    for(ll i = 0; i < m; i++){
        cin >> Y[i];
    }

    ll k; cin >> k;
    long long Z[k + 1];
    ll minZ = INT_MAX;
    for(ll i = 0; i < k; i++){
        cin >> Z[i];
        minZ = min(minZ, Z[i]);
    }

    ll a, b; cin >> a >> b;
    // cout << "a: " << a << " b: " << b << endl;
    long double r2 = 0;
    for(ll j = 0; j < m; j++){
        // cout << "x: " << X[i] << " y: " << Y[j] << " z: " << Z[x] << endl;
        long double possibility = (b * Y[j]) / (long double)((b * Y[j]) + (a * minZ));
        possibility = sqrtl(possibility);
        possibility = maxR1 * possibility;
        if(possibility > r2){
            r2 = possibility;
        }
    }

    cout << fixed << setprecision(12) << r2 << endl;

    return 0;
}