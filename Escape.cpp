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
    ll vP, vD, f, c;
    long double t;
    cin >> vP >> vD >> t >> f >> c;
    if(vP >= vD){
        cout << 0 << endl;
        return 0;
    }
    ll ans = 0;
    while(true){
        long double curr = vP * t;
        long double time = (long double)(curr) /(long double) (vD - vP);
        long double posi = vP * (t + time);
        if(posi >= c){
            break;
        }
        else{
            ans++;
            t = t + f + 2 * time;
        }
    }
    cout << ans << endl;

    return 0;
}