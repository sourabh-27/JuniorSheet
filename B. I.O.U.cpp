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
    ll n, m;
    cin >> n >> m;
    long long arr[101];
    memset(arr, 0, sizeof(arr));

    for(ll i = 0; i < m; i++){
        ll a, b, c;
        cin >> a >> b >> c;
        arr[b] += c;
        arr[a] -= c;
    }

    ll sum = 0, sum2 = 0;
    for(ll i = 0; i < n; i++){
        if(arr[i] > 0){
            sum += arr[i];
        }
        else{
            sum2 += arr[i];
        }
    }
    cout << max(abs(sum), abs(sum2)) << endl;


    return 0;
}