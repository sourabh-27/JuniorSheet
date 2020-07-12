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

bool isPossible(long long * arr, ll n, ll x, ll c){
    ll lastPossible = arr[0];
    ll count = 1;
    for(ll i = 1; i < n; i++){
        if(arr[i] - lastPossible >= x){
            count++;
            lastPossible = arr[i];
        }
    }
    if(count >= c){
        return true;
    }
    return false;
}

int main()
{
    fast;
    ll t;
    cin >> t;
    while(t--){
        ll n, c;
        cin >> n >> c;
        long long arr[n + 1];
        for(ll i = 0; i < n; i++){
            cin >> arr[i];
        }
        sort(arr, arr + n);
        ll low = -1; ll high = arr[n - 1] - arr[0];
        while(high - low > 1){
            ll mid = low + (high - low) / 2;
            // cout << "mid: " << mid << endl;
            if(isPossible(arr, n, mid, c)){
                // cout << "low true" << endl;
                low = mid;
            }
            else{
                high = mid;
            }
        }
        cout << low << endl;
    }


    return 0;
}