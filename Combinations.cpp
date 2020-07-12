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

ll findAns(ll n, ll r, long long ** dp){
    if(r == 0 || r == n){
        return 1;
    }

    if(dp[n][r] != -1){
        return dp[n][r];
    }

    ll ans = findAns(n - 1, r, dp) + findAns(n - 1, r - 1, dp);
    dp[n][r] = ans;
    return ans;
}

int main()
{
    fast;
    ll n, m;
    while(cin >> n >> m){
        long long ** dp = new long long *[n + 3];
        for(ll i = 0; i <= n; i++){
            dp[i] = new long long[m + 3];
            for(ll j = 0; j <= m; j++){
                dp[i][j] = -1;
            }
        }
        if(n == 0 && m == 0){
            return 0;
        }

        ll ans = findAns(n, m, dp);
        cout << n << " things taken " << m << " at a time is " << ans << " exactly." << endl;
    }


    return 0;
}