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
    ll n, l;
    cin >> n >> l;
    long long arr[n + 1];
    for(ll i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr, arr + n);
    long double ans = -1000000001;
    for(ll i = 1; i < n; i++){
        if(arr[i] - arr[i - 1] > ans){
            ans = arr[i] - arr[i - 1];
        }
    }
    ans = ans / 2;
    // cout << "old: " << ans << endl;
    ans = max(ans, (long double)arr[0]);
    ans = max(ans, (long double)(l - arr[n - 1]));
    cout << fixed << setprecision(10) << ans << endl;


    return 0;
}