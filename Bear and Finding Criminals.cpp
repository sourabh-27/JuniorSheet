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
    ll n, a;
    cin >> n >> a;
    long long arr[n + 2];
    ll total = 0;
    for(ll i = 1; i <= n; i++){
        cin >> arr[i];
        if(arr[i] == 1) total += 1;
    }
    ll ans = 0; ll count = 0;
    ll i = a - 1; ll j = a + 1;
    while(i > 0 && j <= n){
        if(arr[i] == 1 && arr[j] == 1){
            ans += 2;
            count += 2;
        }
        else if(arr[i] == 1 || arr[j] == 1){
            count += 1;
        }
        i = i - 1;
        j = j + 1;
    }
    // cout << "ans: " << ans << " count: " << count << endl;
    cout << ans + total - count << endl;

    return 0;
}