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
    long long arr[n + 2];
    for(ll i = 1; i <= n; i++){
        cin >> arr[i];
    }

    long long dp[n + 2][3];
    memset(dp, INF, sizeof(dp));
    dp[0][0] = 0;
    for(ll i = 1; i <= n; i++){
        dp[i][0] = min(dp[i - 1][0] + 1, min(dp[i - 1][1] + 1, dp[i - 1][2] + 1));
        if(arr[i] == 1 || arr[i] == 3){
            dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]);
        }
        if(arr[i] == 2 || arr[i] == 3){
            dp[i][2] = min(dp[i - 1][0], dp[i - 1][1]);
        }
    }

    // for(ll i = 0; i <= n; i++){
    //     cout << "0: " << dp[i][0] << " 1: " << dp[i][1] << " 2: " << dp[i][2] << endl;
    // }
    cout << min(dp[n][0], min(dp[n][1], dp[n][2])) << endl;


    return 0;
}