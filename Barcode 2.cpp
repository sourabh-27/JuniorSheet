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
    ll n, m, x, y;
    cin >> n >> m >> x >> y;
    long long ** dp = new long long *[m + 10];
    for(ll i = 0; i <= m + 10; i++){
        dp[i] = new long long [4];
        for(ll j = 0; j < 3; j++){
            dp[i][j] = INF;
        }
    }
    dp[0][0] = 0; dp[0][1] = 1;
    long long white[m + 5], black[m + 5];
    memset(white, 0, sizeof(white));
    memset(black, 0, sizeof(black));

    for(ll i = 0; i < m; i++){
        for(ll j = 0; j < n; j++){
            if(i == '#'){
                white[j]++;
            }
            else{
                black[j]++;
            }
        }
    }

    for(ll i = 1; i < m; i++){
        white[i] += white[i - 1];
        black[i] += black[i - 1];
    }

    for(ll i = x; i < m; i++){
        for(ll j = max((long long)0, i - y); j <= i - x; j++){
            dp[i][0] = min(dp[i][1], dp[j][1])
        }
    }



    return 0;
}