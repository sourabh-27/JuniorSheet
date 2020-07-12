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

bool comp(pair<ll, ll> &a, pair<ll, ll> &b){
    return a.second > b.second;
}

int main()
{
    fast;
    ll n, m;
    cin >> n >> m;
    vector<pair<ll, ll>> vec;
    for(ll i = 0; i < m; i++){
        ll x, y; cin >> x >> y;
        vec.push_back({x, y});
    }
    sort(vec.begin(), vec.end(), comp);

    ll ans = 0; ll i = 0;
    while(n != 0 && i < vec.size()){
        if(n >= vec[i].first){
            ans += (vec[i].second * vec[i].first);
            n = n - vec[i].first;
            i++;
        }
        else{
            ans += (vec[i].second * n);
            n = 0; i++;
        }
        // cout << "i: " << i << " n: " << n << " ans: " << ans << endl;
    }
    cout << ans << endl;


    return 0;
}