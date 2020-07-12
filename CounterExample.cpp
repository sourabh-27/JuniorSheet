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
    ll l, r;
    cin >> l >> r;
    for(ll i = l; i <= r; i++){
        for(ll j = i + 1; j <= r; j++){
            for(ll k = j + 1; k <= r; k++){
                // cout << "i: " << i << " J: " << j << " k: " << k << endl;
                // cout << "i,j gcd: " << __gcd(i, j) << " j, k gcd: " << __gcd(j, k) << " k, i __ gcd:  " << __gcd(k, i) << endl;
                if(__gcd(i, j) == 1 && __gcd(j , k) == 1 && __gcd(i, k) != 1){
                    cout << i << " " << j << " " << k << endl;
                    return 0;
                }
            }
        }
    }
    cout << -1 << endl;


    return 0;
}