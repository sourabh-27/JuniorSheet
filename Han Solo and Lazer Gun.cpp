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
    ll n, x, y;
    cin >> n >> x >> y;

    set<long double> se;
    for(ll i = 0; i < n; i++){
        ll a, b;
        cin >> a >> b;
        if(a - x == 0){
            se.insert(INT_MIN);
            continue;
        }
        se.insert((long double)((b - y) /(long double) (a - x)));
    }

    cout << se.size() << endl;


    return 0;
}