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

ll findVal(ll x, ll k){
    ll count = 0, val = 1;
    while((x / val) > 0){
        count = count + (x / val);
        val = val * k;
    }
    return count;
}

ll findAns(ll start, ll end, ll n, ll k){
    ll ans = -1;
    while(start <= end){
        ll mid = start + (end - start) / 2;
        ll val = findVal(mid, k);
        // cout << "val: " << val << endl;
        if(val >= n){
            ans = mid;
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    return ans;
}

int main()
{
    fast;
    ll n, k;
    cin >> n >> k;
    ll ans = findAns(0, 1000000001, n, k);
    cout << ans << endl;

    return 0;
}