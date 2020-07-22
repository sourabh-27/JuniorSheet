#include<bits/stdc++.h>
using namespace std; 
#define mod 1073741824
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

#define N 1000001
long long countFact[N];

int main()
{
    fast;
    ll a, b, c;
    cin >> a >> b >> c;

    ll n = a * b * c;

    memset(countFact, 0, sizeof(countFact));

    for(ll i = 1; i <= n; i++){
        for(ll j = i; j <= n; j+=i){
            countFact[j]++;
        }
    }

    ll sum = 0;
    for(ll i = 1; i <= a; i++){
        for(ll j = 1; j <= b; j++){
            for(ll k = 1; k <= c; k++){
                sum = ((sum % mod) + (countFact[i * j * k] % mod)) % mod;
            }
        }
    }
    cout << sum << endl;

    return 0;
}