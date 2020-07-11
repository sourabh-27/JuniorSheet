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

vector<ll> graph[110];

void dfs(ll sV, bool * visited, ll &count, ll &degree){
    cout << "I am visiting sV: " << sV << endl;
    visited[sV] = true;
    count = count + 1;
    degree = degree + graph[sV].size();
    for(ll i = 0; i < graph[sV].size(); i++){
        if(!visited[graph[sV][i]]){
            dfs(graph[sV][i], visited, count, degree);
        }
    }
}

int main()
{
    fast;
    ll n, m;
    cin >> n >> m;
    for(ll i = 0; i < m; i++){
        ll a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    bool visited[105];
    memset(visited, false, sizeof(visited));
    ll ans = 0; ll ans2 = 0;
    for(ll i = 1; i <= n; i++){
        if(!visited[i]){
            ll count = 0, degree = 0;
            dfs(i, visited, count, degree);
            
            if(count % 2 == 1 && degree == (count * 2)){
                ans += 1;
            }
            else{
                ans2 ^= (count % 2);
            }
            cout << "ans: " << ans << "ans2: " << ans2 << endl;
        }
    }
    cout << (ans + ans2) << endl;


    return 0;
}