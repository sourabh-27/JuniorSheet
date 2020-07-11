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
    long long arr[n + 1];
    for(ll i = 0 ; i < n; i++){
        cin >> arr[i];
    }
    sort(arr, arr + 1);
    cout << abs(arr[0] - arr[1]) << " " << abs(arr[0] - arr[n - 1]) << endl;
    for(ll i = 1; i < n - 1; i++){
        cout << min(abs(arr[i] - arr[i - 1]), abs(arr[i] - arr[i + 1])) << " " << max(abs(arr[i] - arr[0]), abs(arr[i] - arr[n - 1]));
        cout << endl;
    }
    cout << abs(arr[n - 1] - arr[n - 2]) << " " << abs(arr[n - 1] - arr[0]) << endl;


    return 0;
}