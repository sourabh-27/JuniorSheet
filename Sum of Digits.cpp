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
    string n;
    cin >> n;
    ll count = 0;
    while(n.length() != 1){
        count++;
        ll ans = 0;
        for(ll i = 0; i < n.length(); i++){
            ans = ans + (n[i] - 48);
        }
        string str = to_string(ans);
        n = str;
        // cout << "n: " << n << endl;
    }
    cout << count << endl;


    return 0;
}