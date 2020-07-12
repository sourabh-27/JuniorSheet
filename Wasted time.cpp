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

long double findDistance(long double x1, long double y1, long double x2, long double y2){
    return sqrtl(((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2)));
}

int main()
{
    fast;
    ll n, k;
    cin >> n >> k;
    long double a, b;
    cin >> a >> b;
    long double ans = 0;
    for(ll i = 0; i < n - 1; i++){
        ll x, y; cin >> x >> y;
        long double distance = findDistance(a, b, x, y);
        // cout << "distance: " << distance << endl;
        ans += distance;
        a = x; b = y;
    }
    // cout << ans << endl;
    ans = (long double)((ans * k) / (long double)(50));
    cout << fixed << setprecision(9) << ans << endl;


    return 0;
}