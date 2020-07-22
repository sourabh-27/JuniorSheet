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
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ll n;
    cin >> n;
    long long arr[n + 2];
    for(ll i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr, arr + n);

    ll ans = INT_MAX;
    for(ll i = 0; i < n; i++){
        auto x = upper_bound(arr, arr + n, arr[i] * 2) - arr;
        ans = min(ans, n - x + i);
    }
    cout << ans << endl;


    return 0;
}