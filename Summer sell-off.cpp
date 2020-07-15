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
    ll n, f;
    cin >> n >> f;
    long long arr[n + 1], arr2[n + 1];
    vector<pair<ll, ll>> vec;
    for(ll i = 0; i < n; i++){
        ll k, l;
        cin >> k >> l;
        arr[i] = k; arr2[i] = l;
        vec.push_back(make_pair(min((2 * k), l) - min(k, l), i));
    }
    sort(all(vec));

    ll ans = 0; ll count = 0;
    for(ll i = n - 1; i >= 0; i--){
        count++;
        ll index = vec[i].second;
        if(count <= f){
            ans += min(2 * arr[index], arr2[index]);
        }
        else{
            ans += min(arr[index], arr2[index]);
        }
    }
    cout << ans << endl;


    return 0;
}