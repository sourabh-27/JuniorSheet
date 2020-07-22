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

long long visited[100001];
long long dp[10001];
ll findAns(ll n, ll m){
    // cout << "n: " << n << " m: " << m << endl;
    if(n >= m){
        return n - m;
    }
    if(n <= 0 || n >= 100000 || visited[n]){
        return INF;
    }

    if(dp[n] != -1){
        return dp[n];
    }

    visited[n] = true;
    ll option1 = 1 + findAns(n - 1, m);
    ll option2 = 1 + findAns(2 * n, m);
    visited[n] = false;
    dp[n] = min(option1, option2);
    return min(option1, option2);
}

int main()
{
    fast;
    ll n, m;
    cin >> n >> m;

    memset(dp, -1, sizeof(dp));
    ll ans = findAns(n, m);
    cout << ans << endl;


    return 0;
}