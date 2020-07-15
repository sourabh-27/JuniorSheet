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
    ll n, m;
    cin >> n >> m;
    vector<ll> graph[102];
    for(ll i = 0; i < m; i++){
        ll x, y; cin >> x >> y;
        graph[x].pb(y); graph[y].pb(x);
    }

    ll ans = 0;
    vector<ll> erase;
    while(true){
        erase.clear();
        for(ll i = 1; i <= n; i++){
            if(graph[i].size() == 1){
                erase.pb(i);
            }
        }
        // cout << "erase.size() : " << erase.size() << endl;
        if(erase.size() > 0){
            ans += 1;
            for(ll i = 0; i < erase.size(); i++){
                // cout << "erase: " << erase[i] << endl;
                graph[erase[i]].clear();
                for(ll j = 1; j <= n; j++){
                    auto x = find(graph[j].begin(), graph[j].end(), erase[i]);
                    if(x != graph[j].end()){
                        graph[j].erase(x);
                    }
                }
            }
        }else{
            break;
        }
    }

    cout << ans << endl;

    return 0;
}