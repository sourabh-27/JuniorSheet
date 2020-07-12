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
    ll n;
    cin >> n;
    long long arr[n + 2];
    for(ll i = 1; i <= n; i++){
        cin >> arr[i];
    }
    unordered_map<ll, ll> umap1, umap2;
    for(ll i = 1; i <= n; i++){
        if(umap1.find(arr[i]) == umap1.end()){
            umap1[arr[i]] = i;
        }
    }

    for(ll i = n; i > 0; i--){
        if(umap2.find(arr[i]) == umap2.end()){
            umap2[arr[i]] = n - i + 1;
        }
    }

    ll q;
    cin >> q;
    ll vas = 0, pet = 0;
    while(q--){
        ll x; cin >> x;
        vas = vas + umap1[x];
        pet = pet + umap2[x];
        // cout << "x: " << x << " umap1[x]: " << umap1[x] << " umap2[x]: " << umap2[x] << endl;
    }

    cout << vas << " " << pet << endl;


    return 0;
}