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
    ll n, k;
    cin >> n >> k;
    ll count = 0;
    for(ll i = 0; i < n; i++){
        ll x;
        cin >> x;
        unordered_map<ll, bool> umap;
        while(x != 0){
            ll last = x % 10;
            x = x / 10;
            if(last <= k){
                umap[last] = true;
            }
        }
        if(umap.size() - 1 == k){
            count++;
        }
    }
    cout << count << endl;


    return 0;
}