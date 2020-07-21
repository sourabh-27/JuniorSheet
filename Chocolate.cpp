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
    for(ll i = 0; i < n; i++){
        cin >> arr[i];
    }

    ll flag = 0;
    ll ans = 1; ll lastIndex = 0;
    for(ll i = 0; i < n; i++){
        if(flag == 1 && arr[i] == 1){
            ans = ans * (i - lastIndex);
            lastIndex = i;
        }
        if(arr[i] == 1 && flag == 0){
            flag = 1;
            lastIndex = i;
        }
    }
    if(flag == 0){
        cout << 0 << endl;
        return 0;
    }
    cout << ans << endl;

    return 0;
}