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
    long long arr[n + 1], arr2[n + 1];
    for(ll i = 0; i < n; i++){
        cin >> arr[i];
        arr2[i] = arr[i];
    }
    sort(arr2, arr2 + n);

    long long sum[n + 1];
    long long sum2[n + 1];
    sum[0] = arr[0];
    for(ll i = 1; i < n; i++){
        sum[i] = arr[i] + sum[i - 1];
        // cout << "i: " << i << " sum: " << sum[i] << endl;
    }
    
    sum2[0] = arr2[0];
    for(ll i = 1; i < n; i++){
        sum2[i] = arr2[i] + sum2[i - 1];
        // cout << "i: " << i << " sum2: " << sum2[i] << endl;
    }

    ll m;
    cin >> m;
    while(m--){
        ll x, y, z;
        cin >> x >> y >> z;
        z--; y--; y--;
        if(x == 1){
            if(y < 0){
                cout << sum[z] << endl;
                continue;
            }
            cout << sum[z] - sum[y] << endl;
        }
        else{
            if(y < 0){
                cout << sum2[z] << endl;
                continue;
            }
            cout << sum2[z] - sum2[y] << endl; 
        }
    }


    return 0;
}