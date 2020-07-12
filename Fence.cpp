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
    long long arr[n + 1];
    for(ll i = 0; i < n; i++){
        cin >> arr[i];
    }
    long long prefix[n + 1] = {0};
    prefix[0] = arr[0];
    for(ll i = 1; i < n; i++){
        prefix[i] = prefix[i - 1] + arr[i];
    }

    ll mini = INT_MAX; ll index = -1;
    for(ll i = k - 1; i < n; i++){
        // cout << "i: " << i << " prefix[i]: " << prefix[i] << " (i - k + 1): " << i - k + 1 << " prefix2: " << prefix[i - k + 1] << endl;
        ll val;
        if(i - k < 0){
            val = prefix[i];
        }
        else{
            val = prefix[i] - prefix[i - k];
        }
        if(val < mini){
            mini = val;
            index = i;
        }
    }
    // cout << mini << endl;
    cout << index - k + 2 << endl;


    return 0;
}