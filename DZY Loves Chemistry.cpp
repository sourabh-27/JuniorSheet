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

vector<ll> graph[55];
bool visited[55];

void dfs(ll sV){
    visited[sV] = true;
    for(ll i = 0; i < graph[sV].size(); i++){
        if(!visited[graph[sV][i]]){
            dfs(graph[sV][i]);
        }
    }
}

int main()
{
    fast;
    ll n, m;
    cin >> n >> m;

    long long pow[51];
    pow[0] = 1;
    for(ll i = 1; i <= 50; i++){
        pow[i] = pow[i - 1] * 2;
    }

    for(ll i = 0; i < m; i++){
        ll x, y; cin >> x >> y;
        graph[x].pb(y);
        graph[y].pb(x);
    }

    ll count = 0;
    for(ll i = 1; i <= n; i++){
        if(!visited[i]){
            count++;
            dfs(i);
        }
    }
    cout << pow[n] / pow[count] << endl;

    return 0;
}