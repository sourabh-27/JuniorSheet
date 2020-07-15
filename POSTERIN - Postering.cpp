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

stack<ll> s;
long long arr[250004];
int main()
{
    fast;
    ll n;
    cin >> n;
    for(ll i = 0; i < n; i++){
        ll x, y;
        cin >> x >> y;
        arr[i] = y;
    }

    ll ans = 0;
    for(ll i = 0; i < n; i++){
        if(s.empty()){
            ans++;
            s.push(arr[i]);
        }
        else{
            while(s.top() > arr[i]){
                s.pop();
                if(s.empty()){
                    break;
                }
            }
            if(s.empty()){
                ans++;
                s.push(arr[i]);
            }
            if(arr[i] != s.top()){
                ans++;
                s.push(arr[i]);
            }
        }
    }

    cout << ans << endl;


    return 0;
}