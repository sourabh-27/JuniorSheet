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
    long long three[3 * n + 10], seven[n + 1];
    three[0] = 1; seven[0] = 1;
    for(ll i = 1; i <= 3 * n + 5; i++){
        three[i] = (three[i - 1] * 3) % mod;
    }

    for(ll i = 1; i <= n; i++){
        seven[i] = (seven[i - 1] * 7) % mod;
    }

    cout << (three[3 * n] - seven[n] + mod) % mod << endl; 


    return 0;
}