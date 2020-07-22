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

vector<pair<ll, ll>> vec[105];
bool visited[105];

bool dfs(ll sV, ll dest, ll color){
    // cout << "sV: " << sV << endl;
    visited[sV] = true;
    if(sV == dest){
        return true;
    }
    for(ll i = 0; i < vec[sV].size(); i++){
        if(!visited[vec[sV][i].first] && vec[sV][i].second == color){
            if(dfs(vec[sV][i].first, dest, color)){
                return true;
            }
        }
    }
    visited[sV] = false;
    return false;
}

int main()
{
    fast;
    ll n, m;
    cin >> n >> m;
    for(ll i = 0; i < m; i++){
        ll a, b, c;
        cin >> a >> b >> c;
        vec[a].pb({b, c});
        vec[b].pb({a, c});
    }

    ll q;
    cin >> q;
    while(q--){
        ll u, v;
        cin >> u >> v;
        ll ans = 0;
        for(ll i = 1; i <= 100; i++){
            memset(visited, false, sizeof(visited));
            // cout << "YO" << endl;
            if(dfs(u, v, i)){
                ans++;
            }
        }
        cout << ans << endl;
    }


    return 0;
}