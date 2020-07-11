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

vector<ll> graph[100001];
queue<ll> que;

void dfs(ll sV, bool * visited){
    // cout << "I am visiting sV: " << sV << endl;
    for(ll i = 0; i < graph[sV].size(); i++){
        if(!visited[graph[sV][i]]){
            visited[graph[sV][i]] = true;
            dfs(graph[sV][i], visited);
            que.push(graph[sV][i]);
        }
    }
}

int main()
{
    fast;
    ll n, k;
    cin >> n >> k;
    for(ll i = 1; i <= k; i++){
        ll num; cin >> num;
        for(ll j = 0; j < num; j++){
            ll x; cin >> x;
            graph[x].push_back(i);
        }
    }

    bool * visited = new bool[n + 2];
    memset(visited, false, sizeof(visited));

    for(ll i = 1; i <= n; i++){
        if(!visited[i]){
            // cout << "I am breaked" << endl;
            visited[i] = true;
            dfs(i, visited);
            que.push(i);
        }
    }

    long long * parent = new long long[n + 2];
    ll initial = 0;
    while(!que.empty()){
        ll front = que.front();
        // cout << "front: " << front << endl;
        que.pop();
        parent[front] = initial;
        initial = front;
    }

    for(ll i = 1; i <= n; i++){
        cout << parent[i] << endl;
    }


    return 0;
}